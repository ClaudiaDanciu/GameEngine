#include "Game.h"
#include "DrawableGameComponent.h"

// Standalone functions for initialization and termination
void Initialise() {
    std::cout << "Initializing game" << std::endl;
}

void Terminate() {
    std::cout << "Terminating game" << std::endl;
}

int main() {
    srand(time(0)); // Seed random number generator

    Game* game = new Game(2); // Create game with capacity for 2 components
    game->SetInitialise(Initialise);
    game->SetTerminate(Terminate);

    GameComponent* gc1 = new GameComponent(); // Create GameComponent
    DrawableGameComponent* gc2 = new DrawableGameComponent(0, 0); // Create DrawableGameComponent

    game->Add(gc1);
    game->Add(gc2);

    game->Run(); // Run the game

    // Clean up dynamically allocated objects
    delete game;
    delete gc1;
    delete gc2;

    return 0;
}

