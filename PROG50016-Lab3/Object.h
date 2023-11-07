#pragma once

#ifndef _OBJECT_H_
#define _OBJECT_H_

#include "json.h"
#include <string>

class Object {
private:
	bool initialized = false;
	std::string name = "";
	int id = 0;

protected:
	Object() = default;
	virtual ~Object() = default;

	virtual void Initialize();
	virtual void Destroy();

public:
	virtual void Load(json::JSON document);
	bool IsInitialized() const { return initialized; }
	const std::string& GetName() const { return name; }
	int GetId() const { return id; }
};

#endif