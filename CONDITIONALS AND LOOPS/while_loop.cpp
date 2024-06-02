/* WHILE LOOP

   while('condition'){


   }

   // as long as the condition is true, the loop will keep on executing.

*/

#include <iostream>
using namespace std;

int main()
{
    // printing from 1 to n

    int n;
    cout << "enter n" << endl;
    cin >> n;
    cout << " " << endl;
    int i = 1;

    while (i <= n)
    {

        cout << i << endl;
        i++;
    }
}