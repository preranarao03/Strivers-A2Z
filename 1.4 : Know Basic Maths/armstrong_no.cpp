#include <iostream>
using namespace std;

// to check if it is an armstrong number

int main()
{

    int num;
    int digit;
    int sum = 0;
    cout << "enter the number" << endl;
    cin >> num;
    int dup = num;
    while (num != 0)
    {
        digit = num % 10;
        sum = sum + (digit * digit * digit);
        num = num / 10;
    }

    if (dup == sum)
    {
        cout << "it is an armstrong number" << endl;
    }
    else
    {
        cout << "not an armstrong number" << endl;
    }

    return 0;
}