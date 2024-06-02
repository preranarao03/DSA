#include <math.h>
#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "enter the number" << endl;
    cin >> n;
    int count = 0;

    while (n != 0)
    {
        int digit = n % 10;
        count++;
        n = n / 10;
    }

    cout << "the number of digits are " << count << endl;
}