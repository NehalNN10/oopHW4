#include "butterfly.hpp"
#include <iostream>

Butterfly::Butterfly(SDL_Rect mr) : moverRect(mr)
{
    frame = 0;
    frames[0] = {256, 24, 174, 134};
    frames[1] = {257, 182, 192, 214};
    frames[2] = {248, 433, 247, 178};
    srcRect = frames[0];
}

void Butterfly::draw()
{
    SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &srcRect, &moverRect);
}

void Butterfly::fly()
{
    // std::cout << "butterfly" << std::endl;
    if (moverRect.x >= 1000)
    {
        moverRect.x = 0;
    }
    if (moverRect.y <= 0 || moverRect.y >= 550)
    {
        // moverRect.y = 0;
        speed_y*=-1;
    }
    moverRect.x += speed_x;
    moverRect.y += speed_y;
    frame = (frame+1)%3;
    srcRect = frames[frame];

}
