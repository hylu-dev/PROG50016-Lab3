#pragma once

#ifndef _SCENE_H_
#define _SCENE_H_

#include "json.h"
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
	void Load(json::JSON document);
	
public:
	Entity* CreateEntity();
	void RemoveEntity(Entity* _entity);
	Entity* FindEntityById(int id);
};

#endif