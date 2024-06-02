/* FOR LOOP

for (initialization of variable : condition : operation)
{


}

*/

#include <iostream>
using namespace std;

int main()
{

    // ex - printing numbers from 1 to n

    int n;
    cout << "enter n" << endl;
    cin >> n;

    cout << " " << endl;

    for (int i = 1; i <= n; i++)
    {

        cout << i << endl;
    }
}