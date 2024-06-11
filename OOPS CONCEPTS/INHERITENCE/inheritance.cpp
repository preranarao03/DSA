/* INHERITANCE

   -> a class will have its own properties and functions
   -> these properties and functions can be inherited into another class
   -> ex - consider class Human which will have properties height, weight, and age
   -> now consider classes Male and Female. These 2 classes will also have the same properties, thus it would be easier for these 2 classes to inherit these properties from Human class
   -> Human will be the parent/super/base class
   -> Male and Female will be the child/sub class

   -> The syntax to for child class to inherit from parent class is:
      -> class child-class : access-modifier parent-class

   MODE OF INHERITANCE:

   SUPER_CLASS (access modifier property     SUB CLASS (mode of inheritance)     RESULT ON THE DATA MEMBER
                on data member)

    public                                    public                              public
    public                                    private                             private
    public                                    protected                           protected

    protected                                 public                              protected
    protected                                 protected                           protected
    protected                                 private                             private

    private                                   public                              not accessible
    private                                   protected                           not accessible
    private                                   private                             not accessible
 */

#include <iostream>
using namespace std;

class Human
{
public:
    int height;
    int weight;
    int age;

public:
    int getAge()
    {
        return this->age;
    }
    void setWeight(int w)
    {
        this->weight = w;
    }
};

class Male : public Human
{
public:
    string color;

    void sleep()
    {
        cout << "male sleeping" << endl;
    }
};

int main()
{
    Male object1;
    object1.setWeight(100);
    cout << object1.age << endl;
    cout << object1.weight << endl;
    cout << object1.height << endl;
    // object1 can access all these properties because Male class has inherited properties of Parent class

    cout << object1.color << endl;
    object1.sleep();
}