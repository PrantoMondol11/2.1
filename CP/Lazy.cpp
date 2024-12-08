#include <bits/stdc++.h>
using namespace std;
int main(){
int a,b,c;
cin>>a>>b>>c;
int arr[c];
for(int i=2;i<c;i++){
    if(arr[i-1]<a*i&&arr[i-1]<b*i){
        arr[i]=a*i;
    }
    else {
        arr[i]=b*i;
    }
}

}