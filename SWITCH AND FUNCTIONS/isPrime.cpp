#include <math.h>
#include <iostream>
using namespace std;

void isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0) // then not a prime number
        {
            cout << "not a prime number" << endl;
        }
    }
}

int main()
{

    int n;
    cout << "enter the number" << endl;
    cin >> n;

    isPrime(n);
}