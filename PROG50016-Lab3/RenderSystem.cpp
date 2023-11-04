#include "RenderSystem.h"
#include "SDL_image.h"
#include <fstream>
#include "json.h"

RenderSystem* RenderSystem::instance = nullptr;

void RenderSystem::Initialize() {
	window = SDL_CreateWindow(name.c_str(), SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, width, height, fullscreen);
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
}

void RenderSystem::Destroy() {
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();
	window = nullptr;
	renderer = nullptr;
}

void RenderSystem::Update() {
	SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
	SDL_RenderClear(renderer);
	SDL_RenderPresent(renderer);
}

void RenderSystem::Load() {
	std::ifstream inputStream("Data/RenderSystem.json");
	std::string str((std::istreambuf_iterator<char>(inputStream)), std::istreambuf_iterator<char>());
	json::JSON document = json::JSON::Load(str);

	if (document.hasKey("name")) {
		name = document["name"].ToString();
	}
	if (document.hasKey("width")) {
		width = document["width"].ToInt();
	}
	if (document.hasKey("height")) {
		height = document["height"].ToInt();
	}
	if (document.hasKey("fullscreen")) {
		fullscreen = document["fullscreen"].ToBool();
	}
}