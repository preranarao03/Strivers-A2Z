#include <iostream>
using namespace std;

// optimal code to find the largest element in the array

int main()
{

    int n;
    cout << "enter the size of array" << endl; // to enter the size of array
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) // for loop to enter the elements
    {
        cin >> arr[i];
    }

    cout << "the array is" << endl;
    for (int i = 0; i < n; i++) // for loop to print the elements
    {
        cout << arr[i] << endl;
    }

    int largest = arr[0]; // set the first element as the largest

    for (int i = 0; i < n; i++) // a for loop to compare the elements with a[0](largest)
    {
        if (arr[i] > largest)
        {
            largest = arr[i]; // if an element is greater than largest considered, then now the largest value is updated
        }
    }

    cout << "the largest element is " << largest << endl; // print the largest element
}