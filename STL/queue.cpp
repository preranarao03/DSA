/* QUEUE

   -> this follows FIFO (first in first out)

 */

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    queue<int> q;
    q.push(1);    // {1}
    q.push(2);    // {1,2}
    q.emplace(4); // {1,2,4}

    // here front will be 1 and back will be 4

    q.back += 5; // 4+5=9

    cout << q.back << endl; // 9 will be printed

    cout << q.front << endl; // 1 will be printed

    q.pop() // front element will be popped => 1

    // size, swap, empty is same as stack
}