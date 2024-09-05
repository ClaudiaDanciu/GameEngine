#ifndef DRAWABLEGAMECOMPONENT_H
#define DRAWABLEGAMECOMPONENT_H

#include "GameComponent.h"

enum Direction { Left, Right, Up, Down }; // Enum for movement direction

class DrawableGameComponent : public GameComponent {
    int x, y; // Coordinates
    Direction direction;

    void ChangeDirection(); // Change the movement direction
    void Draw(); // Draw the current state

public:
    static const int SCREEN_WIDTH = 80;
    static const int SCREEN_HEIGHT = 20;

    DrawableGameComponent(int xStart = 0, int yStart = 0);
    void Update(const tm* eventTime) override; // Override update method
};

#endif // DRAWABLEGAMECOMPONENT_H

