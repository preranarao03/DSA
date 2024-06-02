#include <math.h>
#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "enter the number " << endl;
    cin >> n;

    cout << " " << endl;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << endl;
        }
    }
}
