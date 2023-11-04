#include "Engine.h"
#include "RenderSystem.h"

Engine* Engine::instance = nullptr;

void Engine::Initialize() {
	RenderSystem::Instance().Initialize();
}

void Engine::GameLoop() {
	bool quit = false;
	while (!quit) {
		RenderSystem::Instance().Update();
	}
}

void Engine::Load() {

}