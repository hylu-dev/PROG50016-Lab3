#pragma once

#ifndef _ASSET_H_
#define _ASSET_H_

#include "Object.h"

class Asset : public Object{
protected:
	Asset() = default;
	~Asset() = default;

public:
	virtual void Load() override;
};

#endif