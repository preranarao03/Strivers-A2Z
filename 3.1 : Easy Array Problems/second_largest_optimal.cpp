#include <iostream>
using namespace std;

// optimal code to find the second largest element in an array

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

    int largest = arr[0]; // set largest as the first element of the array
    int slargest = -1;    // set the second largest element as -1

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest) // if a number is greater than the previously intialized largest value then largest is set as a[i] and the previous largest number is set as second largest number
        {
            largest = arr[i];
            slargest = largest;
        }

        else if (arr[i] < largest && arr[i] > slargest) // if a number is not greater than the largest number value but it is greater than the second largest value then the second largest value number is updated.
        {
            slargest = arr[i];
        }
    }

    cout << "the second largest element is " << slargest << endl; // print second largest number

    return 0;
}