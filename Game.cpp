#include "Game.h"
#include <chrono>
#include <thread>

Game::Game(int maxComponents) {
    components = new GameComponent*[maxComponents];
    componentCount = 0;
}

void Game::SetInitialise(FP init) {
    initialise = init;
}

void Game::SetTerminate(FP term) {
    terminate = term;
}

void Game::Add(GameComponent* component) {
    components[componentCount++] = component;
}

void Game::Run() {
    initialise();  // Call initialization function
    for (int i = 0; i < 5; ++i) {
        time_t currentTime = time(nullptr);
        tm* localTime = localtime(&currentTime);
        for (int j = 0; j < componentCount; ++j) {
            components[j]->Update(localTime);
        }
        std::this_thread::sleep_for(std::chrono::seconds(1)); // Sleep for 1 second
    }
    terminate();  // Call termination function
}

Game::~Game() {
    delete[] components;
}

