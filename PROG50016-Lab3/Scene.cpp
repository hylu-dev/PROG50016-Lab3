#include "Scene.h"
#include "Entity.h"

void Scene::Initialize() {

}

void Scene::Destroy() {
	for (auto& _entity : entities) {
		entities.remove(_entity);
		_entity->Destroy();
		delete _entity;
	}
}

void Scene::Update() {
	for (auto& _entity : entities) {
		_entity->Update();
	}
}

void Scene::Load(json::JSON document) {

}

Entity* Scene::CreateEntity() {
	return new Entity;
}

void Scene::RemoveEntity(Entity* _entity) {
	entities.remove(_entity);
}

Entity* Scene::FindEntityById(int id) {
	for (auto& entity : entities) {
		if (entity->GetId() == id) {
			return entity;
		}
	}
	return nullptr;
}