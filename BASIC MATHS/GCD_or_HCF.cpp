#include <math.h>
#include <iostream>
using namespace std;

int main()
{

    int a, b;
    cout << "enter the two numbers" << endl;
    cin >> a;
    cin >> b;
    int gcd;

    for (int i = 1; i < min(a, b); i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }

    cout << gcd << endl;

    return 0;
}