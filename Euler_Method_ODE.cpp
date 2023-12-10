#include <iostream>
#include <cmath>

double function(double y) {
    // Define the ODE: dy/dx = y
    return y;
}

void solveODE(double y0, double x0, double xn, double h) {
    // Initial values
    double x = x0;
    double y = y0;

    // Time-stepping loop using Euler method
    while (x < xn) {
        // Euler method update
        y = y + h * function(y);
        x = x + h;
    }

    // Print the result
    std::cout << "Solution at x = " << xn << ": " << y << std::endl;
}

int main() {
    // Set initial values
    double y0 = 1.0;  // Initial value of y
    double x0 = 0.0;  // Initial value of x
    
    double xn = 1.0;  // Final value of x
    double h = 0.01;   // Step size

    // Solve the ODE
    solveODE(y0, x0, xn, h);

    return 0;
}
