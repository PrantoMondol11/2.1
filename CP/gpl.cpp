#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    vector<int> result;
    while (test--)
    {
        int n;
        cin>>n;
        string bi;
        cin>>bi;
        int num[n];
        for(int i=0;i<bi.size();i++){
            num[i]=bi[i]-'0';
        }
        int digit=0;
         int t = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (num[i] == 1) {
                digit+= pow(2, t);
            }
            t++;
        }
        cout<<digit<<endl;

    }

}