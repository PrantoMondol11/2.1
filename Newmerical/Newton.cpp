#include <bits/stdc++.h>
using namespace std;


double f(double x) {
    return x * x * x - 2 * x - 5;  
}


double f_prime(double x) {
    return 3 * x * x - 2;  
}


void NewtonRaphson(double initial_guess, double tolerance) {
    double x = initial_guess;  
    double h;
    double x1; 
    int iteration = 0;
    while (true) { 
        h = f(x) / f_prime(x);  
        x1 = x - h;  

        iteration++;
        
        
        cout << "Iteration " << iteration << ": x = " << x1 << ", f(x) = " << f(x1) << endl;

        
        if (abs(x1 - x) <= tolerance || abs(f(x1)) <= tolerance) {
            break;
        }

        x = x1;  
    }

    cout << "Root found: " << x1 << endl;
}

int main() {
    double initial_guess = 2;  
    double tolerance = 0.001;   

    
    NewtonRaphson(initial_guess, tolerance);

    return 0;
}
