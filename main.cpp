#include "duck.h"
#include "chicken.h"
#include "roastduck.h"

using namespace std;
using namespace Fowl;
class ToyDuck:public Duck{
    public:
        ToyDuck(){
            name = "toy duck";
        }
        virtual void walk(){
            cout << "toy duck can not walk!" << endl;
        }
};

class Wuji: public Chicken{
    public:
        Wuji(){
            name = "wuji";
        }
        virtual void walk(){
            cout << "wuji walk like wuji" << endl;
        }
};

int main(int argc, char* argv[]){
    Duck* duck = new ToyDuck();
    duck->walk();
    duck->quack();

    Chicken* ck = new Wuji();
    ck->walk();
    ck->crow();

    Duck* rk = new RoastDuck(); 
    rk->walk();
    rk->quack();

    return 0;
}
