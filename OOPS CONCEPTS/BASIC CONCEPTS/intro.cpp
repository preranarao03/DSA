/* OOPS IN C++

   -> OOP is a programming technique where things revolve around an object
   -> Object is an entity - entity has its states/properties and behaviour
   -> by following OOPS there will be an increase in extensibilty , readabilty, manageabilty etc.

   -> ex - consider and object Hero, it will have properties like Name, Health, Level etc..
           -> it will also have behaviours like:
              (i). attack()
              (ii). defense()
              (iii). dance()

  CLASSES AND OBJECTS:

  -> classes are a user defined data type
  -> user makes his/her own datatype
  -> object is an instance of class

*/

#include <iostream>
using namespace std;

class Hero // class Hero with its respective properties
{

    int health;
};

int main()
{
    Hero h1; // a Hero type object has been created

    cout << sizeof(h1) << endl; // the size of object will be equal to the total size of its properties
                                // in this case sizeof(h1) = 4
                                // in case of empty class (class with no properties), the object size will be 1 byte (for its identification)
}