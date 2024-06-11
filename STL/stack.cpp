/* STACK

  -> follows Last In First Out (LIFO)
  -> indexing cannot be followed in stack

*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    stack<int> st;

    st.push(1);    //{1}
    st.push(2);    //{2,1}
    st.push(3);    // {3,2,1}
    st.push(3);    // {3,3,2,1}
    st.emplace(5); // {5,3,3,2,1}

    cout << st.top(); // prints the top element =>5

    st.pop();          // {3,3,2,1} => top element is popped
    cout << st.top();  // prints top element => 3
    cout << st.size(); // prints size => 4
    cout << st.empty() // to check if stack is empty or not; if returns false, then stack is not empty

            stack<int>
                st1,
        st2;
    st1.swap(st2); // used to swap 2 stacks
}