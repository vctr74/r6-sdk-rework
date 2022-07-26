// dllmain.cpp  
#include <windows.h>
#include <vector>

#include "hexrays.hpp"
#include "member.h"
#include "macros.h"

#include "actor.hpp"
#include "pawn.hpp"
#include "entity.hpp"

#include "game_manager.hpp"
#include "profile_manager.hpp"
#include "round_manager.hpp"
  
#include "outlines.hpp"

#include "injection.hpp"

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    if (ul_reason_for_call == 1) Attach();
    if (ul_reason_for_call == 0) Detach();
    return TRUE; 
}

