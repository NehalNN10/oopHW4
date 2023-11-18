#include "bee.hpp"
#include <iostream>
using namespace std;


// pigeon implementation will go here.
Bee::Bee(SDL_Rect mr) : moverRect(mr)
{
    frame = 0;
    frames[0] = {63, 619, 151, 166};
    frames[1] = {234, 630, 163, 162};
    frames[2] = {409, 650, 171, 147};
    srcRect = frames[0];
    freeze_frame_count = 0;
}

void Bee::draw()
{
    SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &srcRect, &moverRect);
}

bool Bee::isOver()
{
    return (moverRect.x >= 1000);
}

void Bee::fly()
{
    // cout << "Bee" << endl;
    if (isOver() == false)
    {
        // moverRect.x += 5;
        // //frame changing mechanism
        // if (freeze_frame_count == 0 && rand()%100 < 5)
        // {
        //     frozen = true;
        // }
        // if (frozen)
        // {
        //     if (freeze_frame_count < 10)
        //     {
        //         freeze_frame_count++;
        //     }
        //     else
        //     {
        //         frozen = false;
        //     }
        // }
        // else
        // {
        //     frame = (frame + 1) % 3;
        //     srcRect = frames[frame];
        // }
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
            }
        }
        else
        {
            moverRect.x += 5;
        }
        frame = (frame + 1) % 3;
        srcRect = frames[frame];
    }
    // else
    // {
    //     cout << "IDK LMAO" << endl;
    // }
}
