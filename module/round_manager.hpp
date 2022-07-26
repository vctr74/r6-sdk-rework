// misc.hpp
#pragma once
class _RoundManager
{
private:
	union
	{
		DEFINE_MEMBER(uint32_t, round_state, 0xCC);
	};
public:
	auto GetRoundState() -> uint32_t {

		return ((*(uint32_t*)
			(__ROL8__(((uint64_t)this - 0x59), 0x35) + 0xCC) - 3) ^ 0x1CD4598Eu) - 0x35932178;
	}
};
auto GetRoundManager() -> _RoundManager* { 
	return reinterpret_cast<_RoundManager*>(
		*(uint64_t*)((uint64_t)GetModuleHandleW(NULL) + 0x7572758)
		);
}