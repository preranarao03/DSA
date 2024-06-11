/* MULTI-LEVEL INHERITANCE
 */

#include <iostream>
using namespace std;

class Animal
{

public:
    int age;
    int weight;

public:
    void speak()
    {
        cout << "speaking" << endl;
    }
};

class Dog : public Animal
{
};

class GermanShephard : public Dog
{
};

int main()
{
    GermanShephard g;
    g.speak(); // we can see that class Dog inherited speak() from class Animal and class GermanShephard inherited speak() from class Dog
}