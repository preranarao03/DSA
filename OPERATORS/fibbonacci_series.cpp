/* FIBBONACCI SERIES

   -> a number in the fibbonacci series is
      equal to the sum of previous 2 numbers

    -> ex - 0,1,1,2,3,5,8, etc...



*/

#include <iostream>
using namespace std;
int main()
{

    int n = 10; // specify the number of iterations you want
    int number;
    int first_number = 0;  // the first number in series is 1
    int second_number = 1; // the second number in series is 1
    cout << 0 << " " << 1 << endl;

    for (int i = 0; i <= n; i++)
    {

        number = first_number + second_number; // the next number in series equal to sum of prev. 2 numbers
        cout << number << endl;
        first_number = second_number; /* after formation of number we have to shift to the next number,
                                         so first_number is made the second_number and second_number
                                         is made equal to the newly formed number ( all shift right by 1 )*/
        second_number = number;
    }
}