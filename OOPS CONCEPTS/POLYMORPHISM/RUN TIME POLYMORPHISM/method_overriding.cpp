/* METHOD OVERRIDING

   -> this comes under run-time polymorphism

   SOME RULES TO BE FOLLOWED ARE:

   -> The method of parent class and child class should have same name
   -> The method of parent class and child class should have same parameters
   -> This is possible through inheritance only

*/

#include <iostream>
using namespace std;

class Animal
{
public:
    void speak()
    {
        cout << "speaking" << endl;
    }
};

class Dog : public Animal
{
public:
    void speak()
    {
        cout << "barking" << endl;
    }
};

int main()
{
    Dog obj; // becoz we are making object of Dog class, Dog class speak() function will be called
    obj.speak();

    // if speak() was not present in Dog class then speak() of Animal class would've been called.
}