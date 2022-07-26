// actor.hpp
#pragma once 
class _Actor
{
private:
	union
	{
		DEFINE_MEMBER(uint64_t, outline_component, 0x1C8);
	};
public: 
	inline auto EnableOutline() -> void {
		uintptr_t outline_component = (
			this->outline_component
			+ 0x758A6372B999F66Ai64) ^ 0x5506BD0B7F8954E4i64; 

		uintptr_t outline_state = *(uintptr_t*)(outline_component + 0xB0);  
				  outline_state = *(uintptr_t*)(outline_component + 0xB0);  

		if (outline_state != 0 && outline_state != 0x20748000)
			*(uintptr_t*)(outline_component + 0xB0) = 0x20748000;
	}
};