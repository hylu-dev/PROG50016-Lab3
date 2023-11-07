#include <iostream>
#include "Engine.h"

int main(int argv, char* argc[]) {
	Engine::Instance().Initialize();
	Engine::Instance().GameLoop();
	Engine::Instance().Destroy();

	return 0;
}