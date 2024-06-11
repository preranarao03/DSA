/* SET

   -> stores everything in unique order and all elements should be unique
   -> begin(), end(), rbegin(), rend(), size(), empty(), and swap() are same
 */

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    set<int> st;
    st.insert(1);  // {1}
    st.emplace(2); // {1,2}
    st.insert(2);  // {1,2}
    st.insert(4);  // {1,2,4}
    st.insert(3);  // {1,2,3,4}

    // {1,2,3,4,5}
    auto it = st.find(3); // will return iterator of element 3

    // {1,2,3,4,5}
    auto it = st.find(6); // if element not present, st.end() will be printed => will point to after the last element

    st.erase(5) // erases specific element => here, deletes 5
}