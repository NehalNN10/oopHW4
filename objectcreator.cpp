#include "objectcreator.hpp"
#include "pigeon.hpp"
#include "butterfly.hpp"
#include "bee.hpp"

Unit* ObjectCreator::getObject(int x_coord, int y_coord)
{
    Unit* u = nullptr;

    int r = rand()%3;
    SDL_Rect mr = {x_coord, y_coord, 50, 50};

    switch(r)
    {
        case 0:
            u = new Pigeon(mr);
            break;
        case 1:
            u = new Bee(mr);
            break;
        case 2:
            u = new Butterfly(mr);
            break;
    }
    return u;
}