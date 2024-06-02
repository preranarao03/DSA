#include <math.h>
#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "enter the number " << endl;
    cin >> n;
    int sum = 0;
    int dup = n;

    while (n != 0)
    {

        int digit = n % 10;
        sum = sum + pow(digit, 3);
        n = n / 10;
    }

    if (dup == sum)
    {

        cout << "armstrong number" << endl;
    }
    else
    {
        cout << "not armstrong number" << endl;
    }
}