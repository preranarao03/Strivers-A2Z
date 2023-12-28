#include <iostream>
using namespace std;

// character hashing

int main()
{

    string s;
    cout << "enter a string" << endl;
    cin >> s;

    int hash[256] = {0}; // 256 size corresponds to the ASCII values of all characters
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]]++;
    }

    int q;
    cout << "enter the number of queries" << endl;
    cin >> q;
    while (q > 0)
    {
        char c;
        cin >> c;
        cout << hash[c] << endl;
        q = q - 1;
    }
    return 0;
}