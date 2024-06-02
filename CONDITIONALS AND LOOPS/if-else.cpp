/* IF-ELSE STATEMENT

   This will provide alternative if condition not satisfied.

   if('condition'){

   }
   else(){

   }
*/

#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "enter n" << endl;
    cin >> n;

    if (n > 0)
    {

        cout << "positive number" << endl;
    }
    else
    {

        cout << "negative number" << endl;
    }
}