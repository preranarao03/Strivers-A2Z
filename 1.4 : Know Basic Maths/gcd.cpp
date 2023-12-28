#include <iostream>
using namespace std;

// to find gcd of 2 numbers

int main()
{

    int a, b;
    cout << "enter the two numbers" << endl;
    cin >> a;
    cin >> b;
    int gcd;

    for (int i = 1; i < min(a, b); i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }

    cout << gcd << endl;

    return 0;
}