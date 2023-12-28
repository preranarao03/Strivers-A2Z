#include <iostream>
using namespace std;

// to find if input number is prime number or not

int main()
{
    int n;
    cout << "enter the number" << endl;
    cin >> n;
    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        cout << "prime number" << endl;
    }
    else
    {
        cout << "not prime number" << endl;
    }

    return 0;
}