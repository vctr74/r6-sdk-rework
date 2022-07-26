// pawn.hpp
#pragma once
class _Entity
{
private:
	union
	{
		DEFINE_MEMBER(uint64_t, pawn, 0x38);
	};
public: 
	inline auto Pawn() -> _Pawn* {
		return reinterpret_cast<_Pawn*>(
			(__ROL8__(this->pawn, 47)
			+ 0x2E32184E980B94E8i64) ^ 0x72C27753E8FBCA83i64
			); 
	} 
};