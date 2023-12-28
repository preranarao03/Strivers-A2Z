#include <iostream>
using namespace std;

// to print all divisors of the input number

int main()
{

    int num;
    cout << "enter the number" << endl;
    cin >> num;
    int n = 1;
    while (n <= num)
    {
        if (num % n == 0)
        {
            cout << n << endl;
        }
        n = n + 1;
    }

    return 0;
}