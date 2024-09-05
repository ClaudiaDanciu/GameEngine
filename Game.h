#ifndef GAME_H
#define GAME_H

#include "GameComponent.h"

typedef void (*FP)(); // Typedef for function pointer

class Game {
    GameComponent** components;
    int componentCount;
    FP initialise;
    FP terminate;

public:
    Game(int maxComponents);
    void SetInitialise(FP init);
    void SetTerminate(FP term);
    void Add(GameComponent* component);
    void Run();
    ~Game();
};

#endif // GAME_H

