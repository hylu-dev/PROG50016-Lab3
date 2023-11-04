#include "SceneManager.h"
#include "Entity.h"
#include "Scene.h"

SceneManager* SceneManager::instance = nullptr;

void SceneManager::Initialize() {

}

void SceneManager::Destroy() {
	for (auto& _scene : scenes) {
		scenes.remove(_scene);
		_scene->Destroy();
		delete _scene;
	}
}

void SceneManager::Update() {
	for (auto& _scene : scenes) {
		_scene->Update();
	}
}

void SceneManager::AddScene(std::string _fileName) {

}

void SceneManager::RemoveScene(std::string _fileName) {

}

Entity* SceneManager::CreateEntity() {
	return activeScene->CreateEntity();
}

void SceneManager::RemoveEntity(Entity* _entity) {
	activeScene->RemoveEntity(_entity);
}

void SceneManager::SetActiveScene(int _id) {
	for (auto& _scene : scenes) {
		if (_scene->id == _id) {
			activeScene = _scene;
		}
	}
}

Entity* SceneManager::FindEntityById(int id) {
	return activeScene->FindEntityById(id);
}