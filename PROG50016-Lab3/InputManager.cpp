#include "InputManager.h"
#include "SDL.h"
#include "Engine.h"

InputManager* InputManager::instance = nullptr;

void InputManager::Initialize() {

}

void InputManager::Destroy() {

}

void InputManager::Update() {
	SDL_Event event;
	while (SDL_PollEvent(&event)) {
		switch (event.type) {
		case SDL_WINDOWEVENT:
			if (event.window.event == SDL_WINDOWEVENT_CLOSE) {
				Engine::Instance().Quit();
			}
			break;
		case SDL_KEYDOWN:
			if (event.key.keysym.sym == SDLK_ESCAPE) {
				Engine::Instance().Quit();
			}
			break;
		default:
			break;
		}
	}
}