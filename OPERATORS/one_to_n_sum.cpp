#include <iostream>
using namespace std;

int main()
{

    int sum = 0;
    int n;
    cout << "enter n" << endl;
    cin >> n;

    cout << " " << endl;

    for (int i = 0; i <= n; i++)
    {

        sum = sum + i;
    }

    cout << sum << endl;
}