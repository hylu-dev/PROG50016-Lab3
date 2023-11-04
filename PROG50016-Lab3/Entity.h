#pragma once

#ifndef _ENTITY_H_
#define _ENTITY_H_

#include "Object.h"
#include <list>

class Component;
class Scene;

class Entity : public Object {
private:
	std::list<Component*> components;

	friend class Scene;

protected:
	Entity() = default;
	~Entity() = default;

	void Initialize() override;
	void Destroy() override;
	void Update();
	
public:
	void Load() override;
	Component* CreateComponent(std::string _componentType);
	void RemoveComponent(Component* _component);
};

#endif