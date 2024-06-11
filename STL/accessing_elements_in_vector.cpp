#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> vec = {1, 2, 3, 4};
    cout << vec[1] << endl; // this will print element at index 2 of vector

    /* TO ACCESS THE ELEMENTS WE CAN ALSO USE AN ITERATOR

       -> the syntax to declare an iterator is:
          -> datatype :: iterator (name of iterator) = vector.begin()
          -> v.begin() will point straight to the memory address of the first element
          -> it++ used to iterate to memory address of next element
          -> *(it) will point the value that exits at the memory location
    */

    vector<int>::iterator it = vec.begin();
    it++;
    cout << *(it) << endl; // output will be 2

    // .end() will point to the memory address of element right after the last element
    vector<int>::iterator i = vec.end();
    i--;
    cout << *(i) << endl; // output will be 4

    // .rend() is used to reverse the vector and then print the end
    vector<int>::iterator itt = vec.rend();
    itt--;
    cout << *(itt) << endl; /* consider vector ={10,20,30,40}, reverse={40,30,20,10},
                             so now the end is 10 (10 is the rend) */

    // .rbegin() is used to reverse the vector and then print the begin (first) element
    vector<int>::iterator itt = vec.rbegin();
    itt++;
    cout << *(itt) << endl; /* consider vector ={10,20,30,40}, reverse={40,30,20,10},
                             so now the begin is 40 (40 is the rbegin) */

    // .back() prints the last element in the vector array
    cout << vec.back() << endl; // 4 will be printed
}
