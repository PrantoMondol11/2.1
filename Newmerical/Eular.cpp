#include<bits/stdc++.h>
using namespace std;
double f(double x, double y){
    return (y-x)/(y+x);

}
void Eular(double x0 , double y0,int steps,double xn){
    double h =(xn-x0)/steps;
    double y=y0;
    double x=x0;
    for(int i=0;i<steps;i++){
        cout<<i<<"\t" << x<<"\t"<<y<<"\t"<<endl;
       y=y+h*f(x,y);
       x=x+h; 
    }
    cout << "root="<<y<<endl;
}

int main (){
    Eular(0,1,5,.1);
    return 0;
}