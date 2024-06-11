// The max size of int array declared in main function is 10^6
// But if the int array is declared globally, the size of array can be 10^7.
// if the size declared is greater than the limits, it will cause segmentation fault

#include <iostream>
using namespace std;

// to get frquency of numbers in an array using hash concept

int main()
{

    int n;
    cout << "enter the size of array" << endl;
    cin >> n; // to find the number of elements in array
    int arr[n];
    cout << "enter the elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // precomputing using hash array

    // consider upto 13 size hash array; from 0 index to 12 index
    // initially all hash array entries will be zero
    int hash[13] = {0};
    // a for loop is run to find the frequency of all elements declared in the input array
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] = hash[arr[i]] + 1;
    }

    // the user will input how many elements they want to find frequency of(queries)
    int q;
    cout << "enter the number of queries" << endl;
    cin >> q;
    while (q > 0) // the number of queries should always be greater than 0 or loop will break
    {
        int number;
        cin >> number;
        cout << hash[number] << endl; // we can find out how many times a number appears in the array by referring the hash array
        q = q - 1;                    // as we iterate through one query the q value will decrement by 1
    }
}