#include <math.h>
#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "enter a number " << endl;
    cin >> n;
    int revNum = 0;

    while (n != 0)
    {

        int digit = n % 10;
        revNum = (revNum * 10) + digit;
        n = n / 10;
    }

    cout << "the reversed number is " << revNum << endl;
}