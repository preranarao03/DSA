/* PRIORITY QUEUE

   -> on with largest value, appears at top
 */

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    priority_pqueue<int> pq;
    pq.push(5);     // {5}
    pq.push(2);     // {5,2}
    pq.push(8);     // {8,5,2}
    pq.emplace(10); // {10,8,5,2}

    cout << pq.top(); // prints 10

    pq.pop(); // top element is popped => 10 is popped
}