/* INHERITANCE AMBIGUITY

   -> a class inherits from seperate classes and those classes have the same function name
   -> thus when inheriting it, the object will get confused as to which one has to be inherited since both have same name

   -> thus, you have to specify the class name:
      -> object-name.class-name:: member/function-name;

 */

#include <iostream>
using namespace std;

class A
{

public:
    void func()
    {
        cout << "I am A" << endl;
    }
};

class B
{

public:
    void func()
    {
        cout << "I am B" << endl;
    }
};

class C : public A, public B
{
};

int main()
{
    C obj;

    // obj.func(); ambiguity in deciding which class function this is

    obj.A::func(); /* specifying the class name */
    obj.B::func();
}