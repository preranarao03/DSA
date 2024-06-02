#include <math.h>
#include <iostream>
using namespace std;

int main()
{

    int a, b;
    char op;

    cout << "enter the 2 numbers :" << endl;
    cin >> a >> b;
    cout << "enter the operator :" << endl;
    cin >> op;

    switch (op)
    {

    case '+':
        cout << (a + b) << endl;
        break;
    case '-':
        cout << (a - b) << endl;
        break;
    case '*':
        cout << (a * b) << endl;
        break;
    case '/':
        cout << (a / b) << endl;
        break;
    default:
        cout << "invalid operator" << endl;
        break;
    }
}