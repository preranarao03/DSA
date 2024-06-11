/*  ACCESS MODIFIERS

    -> There are 3 types of access modifiers:
       (i). Public
       (ii). Privte
       (iii). Protected

    -> Tells us how we can access the properties of class

    -> by default the properties of class are private

    -> public means, we can access the properties anywhere inside or outside the class

    -> ex - class Hero{

        public:
         int health;
         char level;
    }

    -> private means properties can be accessed only inside the class

    ->



*/
#include <iostream>
using namespace std;

class Hero // class Hero with its respective properties
{
public: // health property is specified as public, can be accessed anywhere inside or outside the class
    int health;

private: // level is specified as private, can be accessed only inside class
    char level;

    void print() // level, since it is a private property can be accessed only inside class
    {
        cout << level << endl; // so, this will be printed
    }
};

int main()
{
    Hero ramesh; // a Hero type object has been created

    // to access properties of class use dot operator (.)
    ramesh.health = 70;
    ramesh.level = 'A';

    cout << "health is " << ramesh.health << endl; // since health is a public property, it can be accessed outside of class also, thus this will be printed (NO ERROR!)
    cout << "level is " << ramesh.level << endl;   // since level is a private property cannot be accessed here, this will give error!
}