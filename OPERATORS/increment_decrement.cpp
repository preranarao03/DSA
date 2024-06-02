/* INCREMENT & DECREMENT OPERATORS

   There are 4 variations:
   (i). Pre-increment (++i)
   (ii). Post-increment (i++)
   (iii). Pre-decrement (--i)
   (iv). Post-decrement (i--)

*/

#include <iostream>
using namespace std;

int main()
{

    /* post-increment (i++)
       -> first use i then increment it by 1

       in below example:
       sum = 2 + 3 = 5 (prev value of i is used first)
       then i is incremented and stored in i, so i becomes 4
    */
    int i = 3, a = 2;
    int postincre = a + (i++);
    cout << postincre << " " << i << endl;

    /* pre-increment (i++)
       -> first increment i then use it

       in below example:
       i = 4 and a = 2
       sum = 2 + ++i(5) = 7 (i is increased by 1 then used)

    */

    int preincre = a + (++i);
    cout << preincre << " " << i << endl;

    /* post-decrement (i--)
       -> first use i then decrement it by 1

       in below example:
       i = 5 and a = 2
       sum = 2 + 5 = 7 (prev value of i is used first)
       then i is decremented and stored in i, so i becomes 4
    */

    int postdecre = a + (i--);
    cout << postdecre << " " << i << endl;

    /* pre-decrement (--i)
       -> first decrement i by 1 and then use it

       in below example:
       i = 4 and a = 2
       sum = 2 + 3(--i) = 5 (i is decremented and used)

    */

    int predecre = a + (--i);
    cout << predecre << " " << i << endl;
}