#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    getline(cin, n);
    for (int i = 0; i < n.length(); i++)
    {
        n[i] = toupper(n[i]);
    }
    for (int i = 0; i < n.length(); i++)
    {
        if (n[i] != ' ')
        {
            cout << n[i];
        }
        else
        {
            cout << ' ' << endl;
        }
    }
    return 0;
}