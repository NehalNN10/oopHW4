#pragma once
#include<SDL.h>
#include "drawing.hpp"
#include "Unit.hpp"
class Pigeon : public Unit{

    SDL_Rect srcRect, moverRect;
    int frame = 0;
    SDL_Rect* frames = new SDL_Rect[3];

public:
    // add the fly function here as well.
    void draw() override;
    void fly() override;
    Pigeon(); 
    // may add other overloaded constructors here...
    // Pigeon(SDL_Rect mr);
    Pigeon(SDL_Rect mr);
};
