#include <math.h>
#include <iostream>
using namespace std;

void odd_even(int a) // void because doesnt return anything main function
{

    if (a % 2 == 0)
    {
        cout << "even" << endl;
    }
    else
    {
        cout << "odd" << endl;
    }
}
int main()
{

    int a;
    cout << "enter the number" << endl;
    cin >> a;

    odd_even(a);
}