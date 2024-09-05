#include "DrawableGameComponent.h"
#include <cstdlib>

DrawableGameComponent::DrawableGameComponent(int xStart, int yStart)
    : x(xStart), y(yStart), direction(Right) {} // Initialize with Right direction

void DrawableGameComponent::Update(const tm* eventTime) {
    std::cout << "ID : " << id << " Updated @ " << asctime(eventTime);

    // Update position based on direction
    switch (direction) {
    case Left: --x; break;
    case Right: ++x; break;
    case Up: --y; break;
    case Down: ++y; break;
    }

    // Clamp position
    if (x < 0) x = 0;
    if (x > SCREEN_WIDTH) x = SCREEN_WIDTH;
    if (y < 0) y = 0;
    if (y > SCREEN_HEIGHT) y = SCREEN_HEIGHT;

    Draw(); // Display position and direction
    ChangeDirection(); // Change direction for next update
}

void DrawableGameComponent::Draw() {
    std::string dir;
    switch (direction) {
    case Left: dir = "Left"; break;
    case Right: dir = "Right"; break;
    case Up: dir = "Up"; break;
    case Down: dir = "Down"; break;
    }
    std::cout << dir << ": X=" << x << " Y=" << y << std::endl;
}

void DrawableGameComponent::ChangeDirection() {
    Direction newDirection;
    do {
        newDirection = static_cast<Direction>(rand() % 4); // Random direction
    } while (newDirection == direction); // Ensure it's a new direction
    direction = newDirection;
}

