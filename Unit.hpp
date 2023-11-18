#pragma once
#include "SDL.h"

class Unit
{

    SDL_Rect srcRect = {0,0,100,100};
    SDL_Rect moverRect = {0, 0, 20, 20};

public:
    virtual void draw();
    virtual void fly();
    virtual bool isOver();        

};