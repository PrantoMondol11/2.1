#include <bits/stdc++.h>
using namespace std;
const int M = 1e3 + 10;
int arr[M][M];
long long pr[M][M];

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            cin >> arr[i][j];
            pr[i][j] = arr[i][j] + pr[i - 1][j] + pr[i][j - 1] - pr[i - 1][j - 1];
        }
    }
    int t;
    cin >> t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        cout <<pr[c][d]-pr[a-1][d]-pr[c][b-1]+pr[a-1][b-1]
    }
}