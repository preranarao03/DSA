#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> v = {1, 2, 3, 4};

    /* ITERATING USING FOR LOOP */

    // from vec.begin() till vec.end() print all the elements
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << endl;
    }

    /* ITERATING USING AUTO */

    // auto will automatically assign a vector iterator and automatically assigns a datatype
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << endl;
    }

    /* ITERATING USING FOR EACH */

    for (auto it : v)
    {
        cout << it << endl;
    }

    // .erase used to remove element
    v.erase(v.begin() + 1); // used to erase the element after the first element

    // to erase a particular range of elements
    v.erase(v.begin() + 2, v.begin() + 4); // [start,end)

    // ex - arr=[10,20,30,40,50] => 30 and 40 will be deleted

    /* INSERT FUNCTION */

    vector<int> vec(2, 100);      // {100,100}
    vec.insert(vec.begin(), 300); // at the beginning (first element), 300 is added => {300,100,100}

    vec.insert(vec.begin() + 1, 2, 10); // at one place after beginning, two 100's are added {300,10,10,100,100}

    // {10,20}
    cout << vec.size(); // used to print size of vector =>2

    //{10,20}
    vec.pop_back(); // used to pop the first element =>10

    // v1->{10,20}
    // v2->{30,40}
    v1.swap(v2); // used to swap vectors; v1 ->{30,40}, v2 ->{10,20}
}