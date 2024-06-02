/* COUNT NUMBER OF 1 BITS IN A NUMBER
 */

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number" << endl;
    cin >> n;      // input number
    int count = 0; // set count to 0

    while (n != 0)
    {

        if (n & 1) // if the digit is 1, AND'ing it with 1 will return 1, thus the condition will be true and increment count by 1
        {

            count++; // increment count by 1
        }
        n = n >> 1; // rightshift the number by 1 after considering the previous number
    }

    cout << count << endl; // print count
}