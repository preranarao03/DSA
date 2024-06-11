/* GETTER/SETTER

   -> there are some functions in the class, you can access variables using those
   -> using setter, we can set the values and using getter we can get the values
   -> thus using getter and setter we can set and get the values of private properties also
   -> you can also apply conditions using getter setter
*/

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
    Hero ramesh; // a Hero type object has been created

    //
    ramesh.setHealth(70); // assigning values to properties using setter
    ramesh.setLevel('A');

    cout << "health is " << ramesh.getHealth() << endl; // getting the values using getter
    cout << "level is " << ramesh.getLevel() << endl;

    cout << sizeof(ramesh) << endl; // instead of showing 5 bytes as size (4-int,1-char), it is showing 8 => this is because of padding and greedy alignment
}