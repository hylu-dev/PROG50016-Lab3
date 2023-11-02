#include "Entity.h"
#include "Component.h"

void Entity::Initialize() {

}

void Entity::Destroy() {

}

void Entity::Load() {

}

Component* Entity::CreateComponent(std::string _componentType) {
	return new Component;
}

void Entity::RemoveComponent(Component* _component) {

}