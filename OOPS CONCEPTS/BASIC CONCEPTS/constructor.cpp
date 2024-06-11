/* CONSTRUCTOR

   -> constructor is a special type of function called to create an object
   -> it prepares the new object for use
   -> when an object is being created, always a constructor is called
   -> Properties of constructor are:
      (i). called during object creation
      (ii). no return type
      (iii). no i/p parameter

    PARAMETERIZED CONSTRUCTOR:
     -> some parameters are passed

    THIS KEYWORD:
    -> 'this' keyword stores the address of the object
    -> in other words 'this' will point to the object
    -> so, to access data member of current object, you can use this

*/

#include <iostream>
using namespace std;

class Hero // class Hero with its respective properties
{
private:
    int health;

public:
    char level;

    Hero() // ceated a constructor function
    {
        cout << " default constructor called" << endl;
    }

    // Parameterized constructor
    Hero(int health, char level)
    {
        cout << "this->" << this << endl; // this consists of address of object
        this->level = level;
        this->health = health;
    }

    void print()
    {
        cout << level << endl;
    }

    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }

    void setHealth(int h)
    {
        health = h;
    }

    void setLevel(char ch)
    {
        level = ch;
    }
};

int main()
{

    Hero ramesh(10, 'A');    // object created statically
    cout << &ramesh << endl; // &ramesh will give us address of object
    cout << ramesh.getHealth() << endl;
    cout << ramesh.getLevel() << endl;

    // upon creation of object the constructor is also called by default
    // ramesh.Hero() is called => the output can be seen

    // thus we can see in output for address of object using &ramesh => 0x7ff7bfb40328
    // and also the address stored in this keyword that point to object => 0x7ff7bfb40328
    // thus we can say, this keyword will consist of the address of the object, thus pointing to it
}