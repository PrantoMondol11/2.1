#include<bits/stdc++.h>
using namespace std;
const int N = 1e7+10;
long long hsh[N];

int main (){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        hsh[a[i]]++;
    }
    int t; 
    cin >>t;
    while(t--){
        int p;

        cin>>p;
        cout<<hsh[p]<<endl;
    }
}