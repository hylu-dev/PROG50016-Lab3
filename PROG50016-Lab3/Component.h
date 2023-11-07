#pragma once

#ifndef _COMPONENT_H_
#define _COMPONENT_H_

#include "Object.h"
class Entity;

class Component : Object {
private:
	friend class Entity;

protected:
	Component() = default;
	virtual ~Component() = default;

	void Initialize() override;
	void Destroy() override;
	void Update();
	
public:
	void Load(json::JSON document) override;
};

#endif