#include <iostream>
#include <string>
using namespace std;

int main()
{
    // to extract the digits in a number

    int num;
    int digit;
    cout << "enter a number" << endl;
    cin >> num;
    while (num != 0)
    {
        digit = num % 10;
        cout << digit;
        num = num / 10;
    }

    return 0;
}