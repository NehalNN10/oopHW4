#include<SDL.h>
#include "pigeon.hpp"
#include "bee.hpp"
#include "butterfly.hpp"
#include "objectcreator.hpp"
#include<vector>
#include<list>
using namespace std;

class HUMania{

    private:
        list<Unit*> lst;

    public:
        void drawObjects(); 
        void createObject(int x, int y);
        ~HUMania();
};