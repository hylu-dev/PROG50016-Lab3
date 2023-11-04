#include "Engine.h"
#include "RenderSystem.h"
#include "InputManager.h"
#include "SceneManager.h"
#include "AssetManager.h"

Engine* Engine::instance = nullptr;

void Engine::Initialize() {
	Load();
	RenderSystem::Instance().Initialize();
	InputManager::Instance().Initialize();
	SceneManager::Instance().Initialize();
	AssetManager::Instance().Initialize();
}

void Engine::Destroy() {
	if (instance != nullptr)
	{
		delete instance;
		instance = nullptr;
	}

	RenderSystem::Instance().Destroy();
	InputManager::Instance().Destroy();
	SceneManager::Instance().Destroy();
	AssetManager::Instance().Destroy();
}

void Engine::GameLoop() {
	while (!quit) {
		RenderSystem::Instance().Update();
		InputManager::Instance().Update();
		SceneManager::Instance().Update();
		AssetManager::Instance().Update();
	}
}

void Engine::Load() {
	RenderSystem::Instance().Load();
}