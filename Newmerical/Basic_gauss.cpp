#include <iostream>
#include <iomanip>
using namespace std;

#define SIZE 10

void gaussianElimination(double A[SIZE][SIZE], int n) {
    double x[SIZE]; // To store the solution
    
    // Forward elimination
    for (int i = 0; i < n - 1; i++) {
        if (A[i][i] == 0.0) {
            cout << "Mathematical Error: Division by zero!" << endl;
            return;
        }
        for (int j = i + 1; j < n; j++) {
            double c = A[j][i] / A[i][i];
            for (int k = 0; k <= n; k++) { // Update entire row including RHS
                A[j][k] -= c * A[i][k];
            }
        }
    }

    // Back substitution
    for (int i = n - 1; i >= 0; i--) {
        x[i] = A[i][n]; // Start with the RHS value
        for (int j = i + 1; j < n; j++) {
            x[i] -= A[i][j] * x[j];
        }
        x[i] /= A[i][i]; // Divide by the diagonal element
    }

    // Print solution
    cout << "Solution:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "x" << i + 1 << " = " << x[i] << endl;
    }
}

int main() {
    int n;
    double A[SIZE][SIZE];

    cout << "Enter the number of equations: ";
    cin >> n;

    cout << "Enter the augmented matrix (coefficients and RHS):" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= n; j++) {
            cin >> A[i][j];
        }
    }

    gaussianElimination(A, n);

    return 0;
}
