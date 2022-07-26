// outlines.hpp
#pragma once 
void Outlines() { 
	while (true) {  

		Sleep(1000); 

		_RoundManager* round_manager = GetRoundManager();
 
		if (round_manager->GetRoundState() == 3)
		{
			_GameManager* game_manager = GetGameManager(); 

			for (uint32_t idx = 0; idx < game_manager->EntityCount(); idx++) { 
				  game_manager->Entity(idx)->Pawn()->Actor()->EnableOutline(); 
			}
		}  
	}
}