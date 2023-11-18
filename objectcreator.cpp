#include "objectcreator.hpp"
#include "pigeon.hpp"
#include "butterfly.hpp"
#include "bee.hpp"

Unit* ObjectCreator::getObject(int x_coord, int y_coord)
{
    // Unit* u = nullptr;
    Pigeon* p = nullptr;
    Butterfly* bu = nullptr;
    Bee* b = nullptr;

    int r = rand()%3;
    SDL_Rect mr = {x_coord, y_coord, 50, 50}; //50x50 object at (x_coord, y_coord)

    switch(r)
    {
        case 0:
            p = new Pigeon(mr);
            return p;
            // u = p;
            // break;
        case 1:
            b = new Bee(mr);
            return b;
            // u = b;
            // break;
        case 2:
            bu = new Butterfly(mr);
            return bu;
            // u = bu;
            // break;
    }
    
    // return u;
}