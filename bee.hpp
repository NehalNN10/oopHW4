#pragma once
#include "drawing.hpp"
#include "Unit.hpp"

class Bee : public Unit
{
    private:
        int freeze_frame_count = 0;
        bool frozen = false;

    public:
        Bee(SDL_Rect mr);
        void fly();
        bool isOver();
};