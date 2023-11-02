#pragma once

#ifndef _RENDER_SYSTEM_H_
#define _RENDER_SYSTEM_H_

#include <string>

class Engine;

class RenderSystem final {
private:
	static RenderSystem* instance;

	std::string name = "";
	int width = 0;
	int height = 0;
	bool fullscreen = false;

	friend class Engine;

public:
	static RenderSystem& Instance() {
		if (instance == nullptr) {
			instance = new RenderSystem();
		}
		return *instance;
	}

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

