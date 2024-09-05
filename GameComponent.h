#ifndef GAMECOMPONENT_H
#define GAMECOMPONENT_H

#include <iostream>
#include <ctime>

class GameComponent {
protected:
    int id; // Unique ID
    static int instances; // Static counter for assigning IDs

public:
    GameComponent();
    virtual void Update(const tm* eventTime); // Virtual update function
    virtual ~GameComponent() {} // Virtual destructor
};

#endif // GAMECOMPONENT_H
