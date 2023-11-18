#include <iostream>
#include "Unit.hpp"
#include "drawing.hpp"

void Unit::draw()
{
    SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &srcRect, &moverRect);
    // std::cout << srcRect.x << ", " << srcRect.y << ", " << srcRect.w << ", " << srcRect.h << std::endl;
}

void Unit::fly()
{
    std::cout << "BRUH BE FLYING" << std::endl;
}

bool Unit::isOver()
{
    return false;
}