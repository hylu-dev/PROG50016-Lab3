#include "AssetManager.h"

AssetManager* AssetManager::instance = nullptr;

void AssetManager::Initialize() {

}

void AssetManager::Destroy() {
	for (auto& _asset : assets) {
		assets.remove(_asset);
		delete _asset;
	}
}

void AssetManager::Update() {

}

void AssetManager::AddAsset(Asset* _asset) {
	assets.push_back(_asset);
}

void AssetManager::RemoveAsset(Asset* _asset) {
	assets.remove(_asset);
}