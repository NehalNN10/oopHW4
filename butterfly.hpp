#pragma once
#include <SDL.h>
#include "drawing.hpp"
#include "Unit.hpp"

class Butterfly : public Unit
{

    private:
        SDL_Rect srcRect, moverRect;
        int frame = 0;
        SDL_Rect* frames = new SDL_Rect[3];
        int speed_x = 5;
        int speed_y = 5;

    public:
        Butterfly(SDL_Rect mr);
        void draw() override;
        void fly() override;

};
