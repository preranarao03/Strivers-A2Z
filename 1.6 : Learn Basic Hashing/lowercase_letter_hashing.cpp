#include <iostream>
using namespace std;

// to get frquency of lowercase-letters in a string using hash concept

int main()
{

    string s;
    cin >> s; // input the string

    int hash[26] = {0}; // a hash array to keep track of letter frequency
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a']++;
    }

    int q;
    cin >> q;
    while (q > 0)
    {
        char c;
        cin >> c;
        cout << hash[c - 'a'] << endl; // by doing hash[c-'a'] we can map the letter to the corresponding index in hash map and thus print the corresponding frequency
    }
    return 0;
}