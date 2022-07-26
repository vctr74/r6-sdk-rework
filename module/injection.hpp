// injection.hpp
#pragma once 
void Attach() { 
	CreateThread(0, 0, (LPTHREAD_START_ROUTINE)Outlines, 0, 0, 0);  
}
void Detach() {

}