/* BUBBLE SORT

   -> pushes the maximum to the last by adjacent swaps (kinda opp. to selection sort)

   -> ex - {13,46,24,52,20,9}

   -> first 2 elements are compared (13,46), they are in sorted order go to next 2 elements
   -> next 2 elements are compared (46,24), they are not in sorted order, so swap them
      array = {13,24,46,52,20,9}
   -> next 2 elements are compared (46,52), they are in sorted order go to next 2 elements
   -> next 2 elements are compared (52,20), they are not in sorted order, so swap them
      array = {13,24,46,20,52,9}
   -> next 2 elements are compared (52,9), they are not in sorted order, so swap them
      array = {13,24,46,20,9,52}

      -> now we see that the max = 52, is pushed at the last.
      -> now once again the sorting occurs from index 0 to n-2 and later from 0 to n-3 etc...

    PSEUDOCODE:
                        j    i
    -> we first go from 0 to n-1
    -> then we go from 0 to n-2
    -> next from 0 to n-3 etc...

for(i=n-1;i>=1;i--){

    for(j=0;j<=i-1;j++){ // dont let the comparison go till last element, ex - 52 cannot be compared with any element because it is the last element.

        // first go from 0 to n-1, then from 0 to n-2, then from 0 to n-3 etc..

    }


}

-> if we are going to access an index which is not present, it will throw a runtime error!
-> thus make sure that comparison loop does not go till last element
-> the last element has no element to compare it with, so if loop extends till last element causing it to compare, it wll cause runtime error




*/

#include <math.h>
#include <iostream>
using namespace std;

void bubble_sort(int arr[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " << endl;
    }
}

int main()
{
    int n;
    cout << "enter the size of array " << endl;
    cin >> n;
    int arr[n];
    cout << "enter the elements " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << " " << endl;
    bubble_sort(arr, n);
}