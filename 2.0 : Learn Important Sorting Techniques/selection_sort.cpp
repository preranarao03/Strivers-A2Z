#include <iostream>
using namespace std;

// selection sort

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
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    selection_sort(arr, n);
}

// (1) input the array
// (2) call the selection function
// (3) the number of swaps will be n-2 (first loop)
// (4) set first element, i=0 as the minimum element
// (5) create a loop to traverse through the remaining elements to compare if any element is smaller than that one
// (6) if smaller element is found then that is set as mini, get out of inner loop and swapping is carried out
// (7) now in outer loop, increment by one and consider that second element as minimum
// (8) carry out the same steps till array is sorted
// (9) print the sorted array using for a loop