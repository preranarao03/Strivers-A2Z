#include <iostream>
using namespace std;

// to check if array is sorted or not

int main()
{

    cout << "enter the size of the array" << endl;
    int n;
    cin >> n;
    cout << "enter the elements of the array" << endl;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "the array is" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    for (int i = 1; i < n; i++) // start the for loop from the second element in the array
    {

        if (arr[i] >= arr[i - 1]) // if the element is greater than the previous element that means it is a sorted array (sorted in ascending order)
        {
        }
        else
        {
            cout << "not sorted" << endl; // if not so, then the array is not sorted
        }
    }
    return 0;
}
