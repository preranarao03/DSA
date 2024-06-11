/* ENCAPSULATION

   -> refers to wrapping up data members and functions
   -> data members are also known as properties/state
   -> functions are also known as methods/behaviour
   -> fully encapsulated class => this means all data members are private
   -> this means the members can be used only in that one class (thus this is encapsulation)

   WHY ENCAPSULATION?

   -> with encapsulation, you can hide information (all members that are private can be used only in one particualar class, not all classes)
   -> if we want, we can make class read only
   -> make unit testing easier
   -> helpful for code reusability

*/

#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int age;
    int height;

public:
    int getAge()
    {
        return this->age;
    }
};

int main()
{
    Student first;

    cout << "everything working" << endl;
}
