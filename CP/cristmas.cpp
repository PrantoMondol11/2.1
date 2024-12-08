#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int p;
cin>>p;

for(int k=1;k<=p;k++){
 int c=1;
for(int i=1;i<=k;i++){
   cout<<c<<' ';
   c=c*(k-i)/i;

}
cout<<endl;

}


}

}