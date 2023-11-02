#pragma once

#ifndef _SCENE_MANAGER_H_
#define _SCENE_MANAGER_H_

#include <string>
#include <list>

class Entity;
class Scene;
class Engine;

class SceneManager final {
private:
	static SceneManager* instance;
	std::list<Scene*> scenes;
	Scene* activeScene;

	friend class Engine;

public:
	static SceneManager& Instance() {
		if (instance == nullptr) {
			instance = new SceneManager();
		}
		return *instance;
	}

protected:
	void Initialize();
	void Destroy();
	void Update();

public:
	void AddScene(std::string _fileName);
	void RemoveScene(std::string _fileName);
	Entity* CreateEntity();
	void RemoveEntity(Entity* _entity);
	void SetActiveScene(int _id);
	Scene* GetActiveScene() const { return activeScene; }
	Entity* FindEntityById(int id);

private:
	SceneManager() = default;
	~SceneManager() = default;
	explicit SceneManager(SceneManager const&) = delete;
	SceneManager& operator=(SceneManager const&) = delete;
};

#endif