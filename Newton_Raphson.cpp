#include <iostream>
#include <cmath>

using namespace std;

// Define the function for which we want to find the root
double f(double x) {
    // Example function: f(x) = x^2 - 4
    return x * x - 4;

  
}

// Define the derivative of the function
double f_prime(double x) {
    // Derivative of the example function: f'(x) = 2x
    return 2 * x;

}

// Newton-Raphson method 
double newtonRaphson(double initialGuess, int maxIterations) {
    double x = initialGuess;

    for (int i = 0; i < maxIterations; ++i) {
        double fx = f(x);
        double fpx = f_prime(x);

        // Check if the derivative is close to zero to avoid division by zero
        if (fabs(fpx) < 1e-8) {
            cerr << "Error: Division by zero. Choose a different initial guess." << endl;
            return NAN;
        }

        // Newton-Raphson update
        x = x - fx / fpx;
    }

    cout << "Root after " << maxIterations << " iterations: " << x << endl;
    return x;
}

int main() {
    // Set fixed values for simplicity
    double initialGuess = 2.5;
    int maxIterations = 100;

    // Perform Newton-Raphson method
    double root = newtonRaphson(initialGuess, maxIterations);

    return 0;
}
