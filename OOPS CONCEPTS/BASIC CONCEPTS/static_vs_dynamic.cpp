#include <iostream>
using namespace std;

class Hero // class Hero with its respective properties
{
private:
    int health;

public:
    char level;

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

    // this is static allocation
    Hero a;
    a.setLevel('A');
    a.setHealth(10);
    cout << "level is" << a.getLevel() << endl;
    cout << "health is" << a.getHealth() << endl;

    // dynamic allocation, can be done using pointer
    Hero *b = new Hero;
    b->setLevel('B'); // -> operator used to assign value in this dyanamic allocation
    b->setHealth(20);
    cout << "level is" << (*b).getLevel() << endl;
    cout << "health is" << (*b).getHealth() << endl;

    // b will contain the address that it has to point to to get the value
    // so be dereferencing b => *(b) we will get the value
}