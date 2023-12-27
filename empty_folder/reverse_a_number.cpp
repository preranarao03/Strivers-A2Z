#include <iostream>
using namespace std;

// to reverse a number

int main()
{

    int num;
    int digit;
    int revNum = 0;
    cout << "enter a number" << endl;
    cin >> num;
    while (num != 0)
    {
        digit = num % 10;
        revNum = (revNum * 10) + digit;
        num = num / 10;
    }

    cout << revNum << endl;

    return 0;
}