/* DIFFERENCE BETWEEN THE PRODUCT AND SUM OF DIGITS IN A NUMBER
 */

#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "enter the number" << endl;
    cin >> n; // input the number

    int prod = 1; // set prod value to 1
    int sum = 0;  // set sum value to 0

    while (n != 0) // while number doesnt become 0
    {

        int digit = n % 10;  // te extract the last digit, use modulus
        prod = prod * digit; // to find product
        sum = sum + digit;   // to find sum
        n = n / 10;          // after extract of last digit and computation, this provides the remaining number
    }
    cout << "the product is " << prod << endl; // printing of product of digits
    cout << "the sum is " << sum << endl;      // printing of sum of digits

    cout << "product minus sum " << (prod - sum) << endl; // // printing of product - sum of digits
}
