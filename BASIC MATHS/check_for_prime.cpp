/* PRIME NUMBER
   -> a number that is divisble by only itself and 1 is called a prime number
*/

#include <math.h>
#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "enter the number " << endl;
    cin >> n;
    int count = 0;

    cout << " " << endl;

    for (int i = 1; i <= n; i++)
    {

        if (n % i == 0)
        {
            count++;
        }
    }

    if (count == 2)
    {
        cout << "prime number" << endl;
    }
    else
    {
        cout << "not prime number" << endl;
    }
}