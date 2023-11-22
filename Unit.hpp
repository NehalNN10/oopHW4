#pragma once
#include "SDL.h"

class Unit
{
    public: 
        // made public for now
        SDL_Rect srcRect;
        SDL_Rect moverRect;
        int frame;
        SDL_Rect* frames = new SDL_Rect[3];

        void draw();
        virtual void fly() = 0;
        virtual bool isOver();
        void animate();
};