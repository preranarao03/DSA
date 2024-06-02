/* ELSE-IF STATEMENT

   else if is added to check for multiple conditions one by one.

   if('condition'){

   }
   else if('condition'){

   }
   else{

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
    else if (n < 0)
    {

        cout << "negative number" << endl;
    }
    else
    {

        cout << "zero" << endl;
    }
}