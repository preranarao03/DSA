// DATATYPES AND VARIABLES

/*
    The datatypes are:
      (i). int (integer)
      (ii). char (character)
      (iii). bool (for True (1) or False (0))
      (iv). float (floating point)
      (v). double

     -> variable name cannot start with numbers


*/

#include <iostream>
using namespace std;

int main()
{

    int a = 123;
    cout << a << endl; // number is printed

    char b = 'v';      // in character only single character allowed! ex - char b = "vc" not allowed
    cout << b << endl; // character is printed

    bool bl = true;
    cout << bl << endl; // 1 is printed since it is bool true

    float f = 1.2;
    cout << f << endl; // decimal number (float) is printed

    double d = 2.34;
    cout << d << endl; // double number is printed

    // sizeof is used to print size

    int size = sizeof(a);
    cout << "size of a:" << size << endl;
}
