/* LISTS

   -> similar to vector, but gives front operations as well
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    list<int> ls;

    ls.push_back(2);    //{2}
    ls.emplace_back(4); //{2,4}

    ls.push_front(5); // {5,2,4}
    ls.emplace_front();

    // rest functions are same as vector
    // begin, end, rnegin, rend, clear, insert, size, swap
}