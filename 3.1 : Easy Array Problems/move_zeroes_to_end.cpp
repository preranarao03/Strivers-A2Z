#include <iostream>
using namespace std;

int main()
{
    cout << "enter the size of array" << endl; // enter the size of array
    int n;
    cin >> n;

    int arr[n];
    cout << "enter the elements " << endl; // for loop to enter the elements of array

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "the array is " << endl; // for loop to print the elements of the array

    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << endl;
    }

    int j = -1; // initialize j as -1

    for (int i = 0; i < n; i++) // for loop to find the first zero in the array
    {

        if (arr[i] == 0)
        {

            j = i; // once the first zero has been found in the array break out of the loop
            break;
        }
    }

    for (int i = j + 1; i < n; i++) // create one more pointer pointing at element next to i.
    {
        if (arr[i] != 0) // if that element does not equal zero swap it.
        {

            swap(arr[i], arr[j]);
            j++;
        }
    }

    cout << "the modified array is " << endl; // for loop to print modified array.

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}