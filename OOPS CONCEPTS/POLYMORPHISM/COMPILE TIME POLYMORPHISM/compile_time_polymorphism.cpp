/* COMPILE TIME POLYMORPHISM

   -> There are 2 concepts under this:
      (i). Function Overloading
      (ii). Operator Overloading

    -> If you want to have same functions (function overloading),
       then you have to change the argument of the function to prevent error

 */

#include <iostream>
using namespace std;

class A
{
    // Function Overloading

public:
    void sayHello()
    {
        cout << "hello love babbar" << endl;
    }
    void sayHello(string name) // here an argument is passed through function to prevent error
    {
        cout << "hello" << name << endl;
    }
};

int main()
{
    A obj;
    obj.sayHello(); // "hello love babbar" is printed
}