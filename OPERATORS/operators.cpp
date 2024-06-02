/* OPERATORS

   The bitwise operators are:
   (i). & (AND) (we get 1 when both bits are 1)

        X   Y     Z = X & Y
        0   0     0
        0   1     0
        1   0     0
        1   1     1

    (ii). | (OR) (we get 1 if either one or both bits are 1)

        X   Y     Z = X | Y
        0   0     0
        0   1     1
        1   0     1
        1   1     1

    (iii). | (NOT) (will provide negation of bit)

        X   Z = ~X
        0   1
        1   0

    (ii). | (XOR) (we get 1 if either one bit is 1)

        X   Y     Z = X | Y
        0   0     0
        0   1     1
        1   0     1
        1   1     0

    Left Shift Right Shift Operators:

    (i). Left Shift Operators:
         -> denoted by <<
         -> ex - 5<<1 means shift 5 towards left by 1
         -> 0000 ... 101 becomes 0000 ... 1010
         -> when we left shift by 1 it gets multiplied by 2 (does not apply to every case, but most cases holds true)

    (ii). Right Shift Operators:
         -> denoted by >>
         -> ex - 5>>2 means shift 5 towards right by 2
         -> 0000 ... 101 becomes 0000 ... 0001
         -> when we left shift by 1 it gets divided by 2 (does not apply to every case, but most cases holds true)


      -> regardless of left shift or right shift padding always happens with 0



*/

#include <iostream>
using namespace std;

int main()
{

    int a = 4;
    int b = 6;

    cout << "a&b = " << (a & b) << endl;
    cout << "a|b = " << (a | b) << endl;
    cout << "~a = " << (~a) << endl;
    cout << "a^b = " << (a ^ b) << endl;

    cout << " " << endl;

    cout << (17 >> 1) << endl;
    cout << (17 >> 2) << endl;
    cout << (19 << 1) << endl;
    cout << (19 << 2) << endl;
}