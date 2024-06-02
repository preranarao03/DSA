/* PASS BY VALUE

   -> in pass by value, when we pass a value from main to function, in function a new copy is created
   -> so any changes made in the function will reflect on that copy, not the main function copy
   -> ex - here, n is incremented and printed in function dummy(), so its incremented value is seen only in the function's copy of variable not in the main function's varible.
*/

#include <math.h>
#include <iostream>
using namespace std;

void dummy(int n)
{
    n++;
    cout << n << endl; // the number is incremented but the incremented number will be printed here only
}

int main()
{

    int n;
    cin >> n;

    dummy(n);

    cout << "the number n is " << n << endl; // the incremented number will not be printed here, because that number was incremented in the function only
}