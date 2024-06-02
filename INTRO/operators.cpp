/* OPERATORS

   The types of mathematical operators are:
   (i). modulo operator (%)
   (ii). addition (+)
   (iii). subtraction (-)
   (iv). multiplication (*)
   (v). division (/)

   The types of relational operators are:
   (i). =
   (ii). >
   (iii). >=
   (iv). <
   (v). <=
   (vi). !=

   The types logical operators are:
   (i). && (AND)
   (ii). || (OR)
   (iii). ! (NOT)


*/

#include <iostream>
using namespace std;

int main()
{
    // EXAMPLES OF USAGE OF A FEW OPERATORS

    float b = 2.0 / 5; // division operator
    cout << b << endl;

    int a = 5;
    int c = 7;

    bool d = (a == c); // not equal so 0
    cout << d << endl;

    int q = 0;
    cout << !q << endl; // !0 = 1, so 1 is printed
}