#pragma once

#ifndef _SCENE_H_
#define _SCENE_H_

#include <list>
#include <string>

class Entity;
class SceneManager;

class Scene {
private:
	std::list<Entity*> entities;
	std::string name = "";
	int id = 0;

	friend class SceneManager;

protected:
	void Initialize();
	void Destroy();
	void Update();
	void Load(std::string fileName);
	
public:
	Entity* CreateEntity();
	void RemoveEntity(Entity* _entity);
	Entity* FindEntityById(int id);
};

#endif