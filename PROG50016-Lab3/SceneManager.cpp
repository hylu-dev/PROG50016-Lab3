#include "SceneManager.h"
#include "Entity.h"
#include "Scene.h"

SceneManager* SceneManager::instance = nullptr;

void SceneManager::Initialize() {

}

void SceneManager::Destroy() {

}

void SceneManager::Update() {

}

void SceneManager::AddScene(std::string _fileName) {

}

void SceneManager::RemoveScene(std::string _fileName) {

}

Entity* SceneManager::CreateEntity() {
	return activeScene->CreateEntity();
}

void SceneManager::RemoveEntity(Entity* _entity) {

}

void SceneManager::SetActiveScene(int _id) {

}

Entity* SceneManager::FindEntityById(int id) {
	return activeScene->FindEntityById(id);
}