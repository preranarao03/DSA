/* MULTIPLE-INHERITANCE
 */

#include <iostream>
using namespace std;

class Animal
{

public:
    int age;
    int weight;

public:
    void bark()
    {
        cout << "barking" << endl;
    }
};

class Human
{

public:
    string color;

public:
    void speak()
    {
        cout << "speaking" << endl;
    }
};

// Multiple Inheritance

class Hybrid : public Animal, public Human
{
};

int main()
{
    Hybrid h;
    h.speak();
    h.bark();

    // class Hybrid inherited functions from both classes Animal and Human