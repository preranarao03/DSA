/* NESTED SWITCH

   -> switch case  within switch case
   -> research about exit() function

*/

#include <math.h>
#include <iostream>
using namespace std;

int main()
{

    char ch = '1';
    int num = 1;

    switch (ch)
    {

    case '0':
        cout << "zero" << endl;
        break;
    case '1':
        switch (num)
        {
        case 1:
            cout << "number 1" << endl; // a switch case within a switch case
            break;
        }
        break;
    default:
        cout << "invalid case" << endl;
    }
}