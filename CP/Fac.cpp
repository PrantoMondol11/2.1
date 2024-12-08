#include<bits/stdc++.h>
using namespace std;
// using modulo
int main(){
    int n;
    int m=47;
    long long fact =1;
    cin >> n;
    for (int i=1 ;i<=n;i++){
        fact =(fact*i) % m;
    }
    cout << fact;
}