#include<bits/stdc++.h>
using namespace std;
double f(double x){
    return 1/(1+x*x);

}
void Trapozoidal(double x0 ,int steps,double xn){
    double h =(xn-x0)/steps;
    double y =(h/2)*((f(x0)+f(xn)+2*(f(x0+h)+f(x0+2*h)+f(x0+3*h)+f(x0+4*h+ f(x0+5*h)))));
    cout << "Sol:"<<y<<endl;
}

int main (){
    Trapozoidal(0,6,6);
    return 0;
}