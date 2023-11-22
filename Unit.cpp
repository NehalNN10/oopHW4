#include <iostream>
#include "Unit.hpp"
#include "drawing.hpp"

void Unit::draw()
{
    SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &srcRect, &moverRect);
}

bool Unit::isOver()
{
    return false;
}

void Unit::animate()
{
    frame = (frame+1)%3;
    srcRect = frames[frame];
}