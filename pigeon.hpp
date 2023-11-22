#pragma once
#include<SDL.h>
#include "drawing.hpp"
#include "Unit.hpp"
class Pigeon : public Unit{
    
    private:

    public:
        Pigeon(SDL_Rect mr);
        void fly(); 
};
