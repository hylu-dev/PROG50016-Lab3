#pragma once

#ifndef _ENGINE_H_
#define _ENGINE_H_

#include <vector>

class Engine final {
private:
	static Engine* instance;

	bool quit = false;

public:
	static Engine& Instance() {
		if (instance == nullptr) {
			instance = new Engine();
		}
		return *instance;
	}

	void Destroy();

	void Initialize();

	void GameLoop();

	void Quit() { quit = true; }

private:
	void Load();

	Engine() = default;
	~Engine() = default;
	explicit Engine(Engine const&) = delete;
	Engine& operator=(Engine const&) = delete;
};

#endif