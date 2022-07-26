// profile_manager.hpp | untested
#pragma once
class _ProfileManager
{
private:
	union
	{
		DEFINE_MEMBER(uint64_t, container, 0x20);
	};
public: 
	auto LocalPlayer() -> _Entity* {  
		return reinterpret_cast<_Entity*>(
			__ROL8__(*(uint64_t*)(this->container + 32) - 125i64, 47) - 17i64
			);
	} 
};
auto GetProfileManager() -> _ProfileManager* {
	return reinterpret_cast<_ProfileManager*>(
		__ROL8__(*(uint64_t*)(((
			*(uint64_t*)((uint64_t)GetModuleHandleW(NULL) + 0x7383C28)
			- 42) ^ 0x6E7957EE0CEA1E00i64) - 0x5335AA2E1B2FB6B0i64) + 0x135D49936DE5A998i64, 32)
		);
}