#include <iostream>
using namespace std;

// to count the number of digits in a number

int main()
{

    int num;
    int digit;
    int count = 0;
    cout << "enter the number" << endl;
    cin >> num;
    while (num != 0)
    {
        digit = num % 10;
        count++;
        num = num / 10;
    }
    cout << count << endl;
}