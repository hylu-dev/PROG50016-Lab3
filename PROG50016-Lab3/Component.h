#pragma once

#ifndef _COMPONENT_H_
#define _COMPONENT_H_

class Entity;

class Component {
private:
	friend class Entity;

protected:
	Component() = default;
	virtual ~Component() = default;

	virtual void Initialize();
	virtual void Destroy();
	virtual void Update();
	
public:
	virtual void Load();
};

#endif