#include<SDL.h>
#include "pigeon.hpp"
#include "bee.hpp"
#include "butterfly.hpp"
#include "objectcreator.hpp"
#include<vector>
#include<list>
using namespace std;

class HUMania{

    //Right now we're creating one pigeon, just for practice. for details follow the guidlines 
    Pigeon p1;
    ObjectCreator o;

    //Create your list here
    public:
        list<Unit*> lst;
        void drawObjects(); 
        void createObject(int x, int y);
    
    // create destructor which deletes all dynamic objects
        ~HUMania();
};