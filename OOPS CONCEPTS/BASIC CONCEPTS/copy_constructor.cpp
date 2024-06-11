/*  COPY CONSTRUCTOR
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
        cout << " default simple constructor called" << endl;
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
        cout << this->health << endl;
        cout << this->level << endl;
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

    Hero S(10, 'A');
    S.print();

    // this is a copy constructor, the R object will have same values as S object
    // when S is passed through R object, a copy constructor is called by default
    // the copy constructor will copy the values from S to R object
    Hero R(S);
    R.print();
}
