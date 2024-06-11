/* PAIRS

   -> to store elements in the form of a pair, pair is used
   -> it can be used to store data of any datatype
   -> pair lies in utility library

 */

#include <utility>

#include <iostream>

using namespace std;

int main()
{
    pair<int, int> p = {1, 2}; // syntax to declare a pair

    cout << p.first << p.second << endl; // to refer to the elements in pair, use pair.first=> refer first element, use pair.second=> refer the second element

    // by using nested property of pair, we can store 3 elements
    pair<int, pair<int, int>> q = {1, {3, 4}};

    // to refer elements in the nested pair; use second.first (3) to refer first element and second.second (4) to refer the second element
    cout << q.first << q.second.first << q.second.second << endl;

    // you can also an array of pairs
    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};

    // ex - to refer to the second element of the pair in array index 1
    cout << arr[1].second << endl; // 4 will be printed
    cout << arr[1].first << endl;  // 3 will be printed
}