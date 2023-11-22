#pragma once
#include <SDL.h>
#include "drawing.hpp"
#include "Unit.hpp"

class Butterfly : public Unit
{
    private:
        int speed_x = 5;
        int speed_y = 5;

    public:
        Butterfly(SDL_Rect mr);
        void fly();
};
