#include <iostream>
using namespace std;

// better code to find the second largest element in an array

int main()
{
    cout << "enter the size of array" << endl; // to enter the size of the array
    int n;
    cin >> n;
    cout << "enter the array elements" << endl;
    int arr[n];
    for (int i = 0; i < n; i++) // for loop to enter the elements
    {

        cin >> arr[i];
    }

    cout << "the array is" << endl;
    for (int i = 0; i < n; i++) // for loop to display the array of elements
    {
        cout << arr[i] << endl;
    }

    int largest = arr[0];       // the largest element is intially set as the first element
    for (int i = 0; i < n; i++) // to find the largest element in the array
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout << "the largest element is " << largest << endl;

    cout << "to find the second largest" << endl;
    int secondLargest = -1; // the second largest element is initially set to -1

    for (int i = 0; i < n; i++) // loop to find the second largest element in the array
    {
        if (arr[i] > secondLargest && arr[i] != largest) // as long as the number is greater than the intial second largest value we have considered and as long as it is not the largest number; we can consider it as the second largest number.
        {
            secondLargest = arr[i];
        }
    }

    cout << "the second largest is " << secondLargest << endl; // print second largest number
}