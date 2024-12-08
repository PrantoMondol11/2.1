#include <bits/stdc++.h>
using namespace std;
double f(double x)
{

    return x * x * x - 2 * x- 5;
}
void False(double a, double b, double tolarence)
{   
    if(f(a)*f(b)>0){

        cout<< "Invalid"<<endl;
        return ;
    }
    double c;
    int itretion = 0;
    while (abs(f(c)) >= tolarence)
    {
        
       c=((a*f(b))-(b*f(a)))/(f(b)-f(a));
       cout<<itretion++<<"\t"<<a<<"\t"<<b<<"\t"<<c<<"\t"<<f(c)<<endl;
       if(f(c)==0){
        break;
       }
       else if(f(a)*f(c)<0){
                b=c;
       }
       else {
        a=c;
       }
    }
    cout <<c<<endl;
}
int main()
{
    False(2,3,.001);
    return 0;
}