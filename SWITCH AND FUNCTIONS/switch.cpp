/* SWITCH CASE STATEMENT

   -> instead of writing multiple if-else statements, use switch case
   -> The syntax is:

      switch(expr.){

        case const1: ...


        case const2: ...


        etc ...

        default:

      }

    -> const1, const2 etc... can be a number or character
    -> default case is not mandatory, but it is good practice to include
    -> if break is not included, the all cases after matching case will be printed.
    -> use of continue() is not valid in switch case, it applies only on loops not conditional statements like switch
*/

#include <math.h>
#include <iostream>
using namespace std;

int main()
{

    int num = 2; // num is set as 2

    switch (num)
    {

    case 1:
        cout << "first" << endl;
        break;

    case 2:
        cout << "second" << endl;
        break;

    case 3:
        cout << "third" << endl;
        break;

    default:
        cout << "default case" << endl;
    }
    // because num=2, case 2 is executed.
}