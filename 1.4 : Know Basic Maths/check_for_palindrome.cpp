#include <iostream>
using namespace std;

// to check for palindrome

int main()
{

    int num;
    int digit;
    int revNum = 0;
    cout << "enter a number" << endl;
    cin >> num;
    int dup = num;
    while (num != 0)
    {
        digit = num % 10;
        revNum = (revNum * 10) + digit;
        num = num / 10;
    }
    if (dup == revNum)
    {
        cout << "palindrome" << endl;
    }
    else
    {
        cout << "not a palindrome" << endl;
    }
}