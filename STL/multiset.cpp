/* MULTI-SET

   -> everything is same as set, but can store duplicate elements also

 */

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    multiset<int> ms;
    ms.insert(1); // {1}
    ms.insert(1); // {1,1}
    ms.insert(1); // {1,1,1}

    // {1,1,1}
    ms.erase(1); // all 1's will be erased

    // {1,1,1}
    ms.erase(ms.find(1)); // only single one will be erased

    // you can also specify the range to delete the elements
}

/* UNORDERED SET

   -> lower_bound and upper_bound function does not work, rest all functions are same
   -> it does not store in any specific order
   -> has better complexity than set in some cases

*/
