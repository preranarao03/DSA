/* HIERARCHICAL-INHERITANCE
 */

#include <iostream>
using namespace std;

class A
{

public:
    void func1()
    {
        cout << "inside function 1" << endl;
    }
};

// Hierarchical Inheritance - classes B and C inherit from class A

class B : public A
{

public:
    void func2()
    {
        cout << "Inside function 2" << endl;
    }
};

class C : public A
{

public:
    void func3()
    {
        cout << "Inside function 3" << endl;
    }
};

int main()
{
    A a;
    B b;
    a.func1();
    b.func1();

    // objects of classes B and C have inherited function of class A
}
