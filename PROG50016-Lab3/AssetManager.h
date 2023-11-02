#pragma once

#include <list>

class Asset;
class Engine;

class AssetManager {
private:
	static AssetManager* instance;
	std::list<Asset*> assets;

	friend class Engine;

public:
	static AssetManager& Instance() {
		if (instance == nullptr) {
			instance = new AssetManager();
		}
		return *instance;
	}

protected:
	void Initialize();
	void Destroy();
	void Update();

public:
	void AddAsset(Asset* _asset);
	void RemoveAsset(Asset* _asset);

private:
	AssetManager() = default;
	~AssetManager() = default;
	explicit AssetManager(AssetManager const&) = delete;
	AssetManager& operator=(AssetManager const&) = delete;
};

