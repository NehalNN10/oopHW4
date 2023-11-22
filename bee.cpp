#include "bee.hpp"
#include <iostream>
using namespace std;

Bee::Bee(SDL_Rect mr)
{
    moverRect = mr;
    frame = 0;
    frames[0] = {63, 619, 151, 166};
    frames[1] = {234, 630, 163, 162};
    frames[2] = {409, 650, 171, 147};
    srcRect = frames[0];
    freeze_frame_count = 0;
}

void Bee::fly()
{
    if (freeze_frame_count == 0 && rand()%100 < 5)
    {
        frozen = true;
    }
    if (frozen)
    {
        if (freeze_frame_count < 10)
        {
            freeze_frame_count++;
        }
        else
        {
            frozen = false;
            freeze_frame_count = 0;
        }
    }
    else
    {
        moverRect.x += 5;
    }
}

bool Bee::isOver()
{
    return (moverRect.x >= 1000);
}
