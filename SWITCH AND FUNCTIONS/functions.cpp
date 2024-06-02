/* FUNCTIONS

   -> Functions are used to deal with repetitive tasks
   -> Functions have a well defined task
*/

#include <math.h>
#include <iostream>
using namespace std;
int power(int a, int b) // int is the return type
{
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }

    return ans; // the answer of int datatype is returned to main
}
int main()
{

    int a, b;
    cin >> a >> b; // taking input from user

    int ans = power(a, b); // numbers are sent to function, later answer returned is stored in variable and later printed

    cout << "the ans is " << ans << endl;
}