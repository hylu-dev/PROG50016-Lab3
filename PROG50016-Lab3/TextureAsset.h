#pragma once

#ifndef _TEXTURE_ASSET_H_
#define _TEXTURE_ASSET_H_

#include "Asset.h"

class TextureAsset : public Asset {
protected:
	TextureAsset() = default;
	~TextureAsset() = default;

public:
	void Load(json::JSON document) override;
};

#endif