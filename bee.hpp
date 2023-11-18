#pragma once
#include "drawing.hpp"
#include "Unit.hpp"

class Bee : public Unit
{

    private:
        SDL_Rect srcRect, moverRect;
        int frame;
        SDL_Rect* frames = new SDL_Rect[3];
        int freeze_frame_count = 0;
        bool frozen = false;

    public:
        Bee(SDL_Rect mr);
        void draw() override;
        void fly() override;
        bool isOver() override;

};