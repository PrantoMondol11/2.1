#include<bits/stdc++.h> 
using namespace std;
const int N= 1e7+7;
long long arr[N];
int main(){
int n;
int ar[n];
for (int i=1;i<=n;i++){
    cin>>ar[i];
    arr[i]=arr[i-1]+ar[i];
}

int t;
cin>>t;
while(t--){
    int l,r;
    cin>>l>>r;
    long long sum=arr[r]-arr[l-1];
    cout<<sum<<endl;
}
}