#include <iostream>
#include <map>
using namespace std;

// to find frequency of numbers in array using map

int main()
{

    int n;
    cout << "enter the size of array" << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    int q;
    cout << "enter the number of queries" << endl;
    cin >> q;
    while (q > 0)
    {
        int number;
        cin >> number;
        cout << mpp[number] << endl;
        q = q - 1;
    }

    return 0;
}