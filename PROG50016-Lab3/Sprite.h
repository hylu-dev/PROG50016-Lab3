#pragma once

#ifndef _SPRITE_H_
#define _SPRITE_H_

#include "Component.h"
#include "IRenderable.h"

class Sprite final : public Component, public IRenderable {
public:
	Sprite() = default;
	
	void Load(json::JSON document);

protected:
	void Destroy();
	void Update();
	void Render() override;
};

#endif