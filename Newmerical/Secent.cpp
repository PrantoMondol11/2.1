#include<bits/stdc++.h>
using namespace std;


double f(double x) {
    return pow(x, 3) - 2 * x - 5;  
}


void Secant(double x0, double x1, double tolerance) {
    int iteration = 1;  
    double x2;

    while (true) {
        
        x2 =x1 - (((x1-x0) * f(x1))) / (f(x1) - f(x0));

        cout << "Iteration " << iteration++ << ": x0 = " << x0 << ", x1 = " << x1 << ", x2 = " << x2 
             << ", f(x2) = " << f(x2) << endl;

        
        if (abs(x2 - x1) <= tolerance) {
            break;  
        }
        
        
        x0 = x1;
        x1 = x2;
    }

    
    cout << "Root found: " << x2 << endl;
}

int main() {
    
    Secant(2, 3, 0.001);  
    return 0;
}
