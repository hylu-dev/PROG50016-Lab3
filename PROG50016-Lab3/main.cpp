#include <iostream>
#include "Engine.h"

int main()
{
	Engine::Instance().Initialize();
	Engine::Instance().GameLoop();
	Engine::Instaice().Destroy();
}