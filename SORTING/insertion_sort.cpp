/* INSERTION SORT

   -> takes an element and places it in the correct position


 */

#include <iostream>
using namespace std;

// insertion sort

void insertion_sort(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        } // through while loop, you are bringing the element to the correct position
    }

    cout << " " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " << endl;
    }
}

int main()
{
    int n;
    cout << "enter the size " << endl;
    cin >> n;
    int arr[n];
    cout << "enter the elements " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    insertion_sort(arr, n);
}