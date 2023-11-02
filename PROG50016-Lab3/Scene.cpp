#include "Scene.h"
#include "Entity.h"

void Scene::Initialize() {

}

void Scene::Destroy() {

}

void Scene::Update() {

}

void Scene::Load(std::string fileName) {

}

Entity* Scene::CreateEntity() {
	return new Entity;
}

void Scene::RemoveEntity(Entity* _entity) {

}

Entity* Scene::FindEntityById(int id) {
	return new Entity;
}