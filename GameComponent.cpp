#include "GameComponent.h"

int GameComponent::instances = 0; // Initialise static variable

GameComponent::GameComponent() {
    id = ++instances; // Assign unique ID
}

void GameComponent::Update(const tm* eventTime) {
    std::cout << "ID : " << id << " Updated @ " << asctime(eventTime);
}
