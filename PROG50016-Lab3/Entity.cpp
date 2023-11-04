#include "Entity.h"
#include "Component.h"

void Entity::Initialize() {

}

void Entity::Destroy() {
	for (auto& _component : components) {
		components.remove(_component);
		_component->Destroy();
		delete _component;
	}
}

void Entity::Update() {
	for (auto& _component : components) {
		_component->Update();
	}
}

void Entity::Load() {

}

Component* Entity::CreateComponent(std::string _componentType) {
	return new Component;
}

void Entity::RemoveComponent(Component* _component) {
	components.remove(_component);
}