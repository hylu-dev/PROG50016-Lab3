#pragma once

#ifndef _RENDER_SYSTEM_H_
#define _RENDER_SYSTEM_H_

#include "IRenderable.h"
#include <string>
#include <list>
#include "SDL.h"

class Engine;

class RenderSystem final {
private:
	static RenderSystem* instance;

	SDL_Window* window = nullptr;
	SDL_Renderer* renderer = nullptr;
	std::string name = "";
	int width = 1280;
	int height = 720;
	bool fullscreen = false;
	std::list<IRenderable*> renderables;

	friend class Engine;

public:
	static RenderSystem& Instance() {
		if (instance == nullptr) {
			instance = new RenderSystem();
		}
		return *instance;
	}
protected:
	void Initialize();
	void Destroy();
	void Update();
	void Load();

private:
	RenderSystem() = default;
	~RenderSystem() = default;
	explicit RenderSystem(RenderSystem const&) = delete;
	RenderSystem& operator=(RenderSystem const&) = delete;
};
#endif

