#include <iostream>
using namespace std;

// to remove duplicates in an array

int main()
{

    int n;
    cout << "enter the size of the array" << endl; // enter size of array
    cin >> n;
    int arr[n];

    cout << "enter the elements" << endl;

    for (int i = 0; i < n; i++) // loop to enter the elements of array
    {
        cin >> arr[i];
    }

    int i = 0; // intialize i to point at 0th index

    for (int j = 1; j < n; j++) // intialize j to point at 1st index
    {

        if (arr[i] != arr[j]) // if jth element not equal to ith element then place that jth element in front of the ith element and later increment ith value.
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }

    cout << "the array is" << endl; // print the array after logic is processed.

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}