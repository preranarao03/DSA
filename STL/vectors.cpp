/* VECTORS

   -> once an array has been declared along with its size, suppose we want to add an element after its size limit, we cannot do so
   -> this is where vector can help us
   -> vectors are dynamic in nature
   -> when we do not know the size, use of vector is the best approach

 */

#include <iostream>

using namespace std;

int main()
{
    // syntax of declaring vector
    // vector can be of any datatype- int,string,char etc..
    // this line creates an empty container
    vector<int> v;

    // .push_back() pushes an element into the vector container
    v.push_back(1);

    // .emplace_back() is similar to .push_back()
    // this dynamically increases the size of container and pushes 2 to the back
    // .emplace_back() is said to be faster than push_back()
    v.emplace_back(2);

    // TO INSERT PAIR INTO VECTOR:

    // syntax to declare a pair in vector
    vector<pair<int, int>> vec;

    // when using .push_back for pairs, enclose elements in {}
    vec.push_back({1, 2});
    // when using.emplace_back for pairs, curly brackets not needed
    vec.emplace_back(3, 4);

    // TO DECLARE MANY ELEMENTS:

    // to declare a vector with several instances:
    vector<int> p(5, 100); // this will declare a vector with 5 instances of 100 => o/p- [100,100,100,100,100]

    vector<int> q(5); // this will declare 5 instances of 0

    vector<int> r(5, 20); // this will declare 5 instances of 20

    // TO COPY ONE VECTOR INTO ANOTHER
    // -> to do so you need to declare another vector and then copy the vector into that

    vector<int> v1(5, 17); // vector v1 is created
    vector<int> v2(v1);    // vector v1 is copied to newly defined vector container v2
}