#include "pigeon.hpp"
#include "game.hpp"
#include "Unit.hpp"
#include <iostream>
// pigeon implementation will go here.


// in project implementation this draw function should only be in superclass
// void Pigeon::draw(){
    // SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &srcRect, &moverRect);
// }


// fly() is overrided from the superclass
// void Pigeon::fly(){
//     // 
//     moverRect.x += 5;
// }

Pigeon::Pigeon(){
    // src coorinates from assets.png file, they have been found using spritecow.com
    srcRect = {7,88,160,103};

    // it will display pigeon on x = 30, y = 40 location, the size of pigeon is 50 width, 60 height
    moverRect = {30, 40, 50, 50};
    frame = 0;
    frames[0] = {7, 88, 155, 103};
    frames[1] = {0, 237, 153, 84};
    frames[2] = {2, 361, 159, 124};
}

Pigeon::Pigeon(SDL_Rect mr) : moverRect(mr)
{
    frame = 0;
    frames[0] = {7, 88, 155, 103};
    frames[1] = {0, 237, 153, 84};
    frames[2] = {2, 361, 159, 124};
    srcRect = frames[0];
}

void Pigeon::draw()
{
    SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &srcRect, &moverRect);
}

void Pigeon::fly()
{
    // std::cout << "pigeon" << std::endl;
    if (moverRect.x >= 1000)
    {
        moverRect.x = 0;
    }
    moverRect.x += 5;
    frame=(frame+1)%3;
    srcRect = frames[frame];
}

