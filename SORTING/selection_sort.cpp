/* SELECTION SORT

   -> as the name suggests, we select minimums
   -> look through the entire array, and search forminimum and place it at start

   -> ex - consider array {13,46,24,52,20,9}

   -> here, 9 is the minimum so it is put at beginning and it swap places with 13
      result = {9,46,24,52,20,13}

    -> Now, we look at the remaining portion, 13 is the smallest so bring it to the start and swap
      result = {9,13,24,52,20,46}

    -> Now, we look at the remaining portion, 20 is the smallest so bring it to the start and swap
      result = {9,13,20,52,24,46}

    -> Now, we look at the remaining portion, 24 is the smallest so bring it to the start and swap
      result = {9,13,20,24,52,46}

    -> Now, we look at the remaining portion, 46 is the smallest so bring it to the start and swap
      result = {9,13,20,24,46,52}

    -> Now, we look at the remaining portion, 56 is the only element left so nothing more to look at, it is the largest.
      result = {9,13,20,24,46,52}

    NOW THE ARRAY IS SORTED!!

    PSEUDOCODE:
    -> we can see a pattern forming:
       (i). swap at index 0 and min which lies b/w index [0-n-1]
       (ii). swap at index 1 and min which lies b/w index [1-n-1]
       (iii). swap at index 2 and min which lies b/w index [2-n-1]
             ETC...

    -> The swapping does not go till the very last element, for ex - 52 has nothing to be swapped with, it is the largest
    -> thus swapping only goes till n-2 index.

    -> thus, we will run 2 loops; (i). one which refers that overall swapping occurs only till n-2 index
                                  (ii). one in which we are finding min between i and (i - n-1)

    -> for(i=0;i<n-2;i++){
        min=i; (assuming min. occurs at i itsef)
    }
    for(j=i;j<=n-1;j++){

        if(arr[j]<arr[mini]){
            mini=j;  (if we come across an element that is smaller than initial mini, then we update the mini.)
        }
        // use swapping algo to implement


    TIME COMPLEXITY:
    -> the time complexity of selection sort is O(N^2) in best, worst and avg. case

    }



*/

#include <math.h>
#include <iostream>
using namespace std;

void selection_sort(int arr[], int n)
{
  for (int i = 0; i <= n - 2; i++)
  {
    int mini = i;
    for (int j = i; j <= n - 1; j++)
    {

      if (arr[j] < arr[mini])
      {
        mini = j;
      }
    }
    int temp = arr[mini];
    arr[mini] = arr[i];
    arr[i] = temp;
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

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  cout << " " << endl;

  selection_sort(arr, n);
}