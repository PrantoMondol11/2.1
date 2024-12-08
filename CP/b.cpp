#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        vector<char> result;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                cout << 0;
            }
            else
            {
                cout << 1;
            }
        }
        cout<<endl;
    }
}