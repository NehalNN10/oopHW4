#include "pigeon.hpp"
#include "game.hpp"
#include "Unit.hpp"
#include <iostream>

Pigeon::Pigeon(SDL_Rect mr)
{
    moverRect = mr;
    frame = 0;
    frames[0] = {7, 88, 155, 103};
    frames[1] = {0, 237, 153, 84};
    frames[2] = {2, 361, 159, 124};
    srcRect = frames[0];
}

void Pigeon::fly()
{
    if (moverRect.x >= 1000)
    {
        moverRect.x = 0;
    }
    moverRect.x += 5;
}

