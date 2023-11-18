#include <iostream>
#include "HUMania.hpp"
#include "objectcreator.hpp"
#include "Unit.hpp"
#include <cstring>
#include <typeinfo>

using namespace std;

void HUMania::drawObjects()
{
    // call draw functions of all the objects here
    // p1.draw();
    for (auto it = lst.begin(); it != lst.end();)
    {
        if (strcmp(typeid(**it).name(), "3Bee") == 0 && (*it)->isOver() == true)
        {
            delete *it;
            *it = nullptr;
            it = lst.erase(it);
            cout << "Deleted" << endl;
            continue;
        }
        else
        {
            (*it)->draw();
            (*it)->fly();
            it++;
        }
    }
}

// creates new objects 
void HUMania::createObject(int x, int y)
{
    std::cout << "Mouse clicked at: " << x << " -- " << y << std::endl;

    lst.push_back(o.getObject(x, y));
}

HUMania::~HUMania()
{

    for (Unit* u : lst)
    {
        delete u;
        u = nullptr;
        cout << "Cleared from list!" << endl;
    }
    lst.clear();
}
