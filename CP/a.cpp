#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){

    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>b(n);
    vector <int> c(n);
   
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    int mini=*min_element(a.begin(),a.end());
    int maxi=*max_element(a.begin(),a.end());
    for(int j=0;j<n;j++){
       b[j]=maxi;
    }
   c[0]=maxi;
    for(int k=1;k<n;k++){

        c[k]=mini;
    }
    int sum=0;
    for(int m=0;m<n;m++){
        sum=sum+(b[m]-c[m]);
    }
        cout<<sum<<endl;

}

}