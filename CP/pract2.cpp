#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
     vector<string>s;
    while (test--)
    {

        int n;
        cin >> n;
        int a[n];
       
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long  product = 1;
        for (int i = 0; i < n; i++)
        {
            product = product * a[i];
        }
        int last = product % 10;
        if (last== 2 || last == 3 || last == 5)
        {
           s.push_back("YES"); 
        }
        else
        {
         s.push_back("NO");    
        }

    }
    for(int i=0;i<s.size();i++)
    {
      cout<<s[i]<<endl;  
    }
    return 0;
}