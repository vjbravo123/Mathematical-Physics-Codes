#include <iostream>
#include <vector>
using namespace std;

long double trapezoidalRule(vector<double>& x_values, vector<double>& y_values , int n) {
    long double result = 0;

    for (int i = 1; i < n - 1; i++) {
        result += y_values[i];
    }

    double h = (x_values[n - 1] - x_values[0]) / (n - 1);
    result = h * (y_values[0] + 2 * result + y_values[n - 1]) / 2;

    return result;
}

int main() {
    int n;
    cout << "Enter the number of subintervals: ";
    cin >> n;

    vector<double> x_values(n);
    vector<double> y_values(n);

    cout << "Enter the values for the function f(x) corresponding to the x points:\n";
    for (int i = 0; i < n; i++) {
        cout << "x[" << i << "]: ";
        cin >> x_values[i];
        cout << "f(x)[" << i << "]: ";
        cin >> y_values[i];
    }

    long double result = trapezoidalRule(x_values, y_values , n);

    cout << "The accurate value of the integral is: " << result << endl;

    return 0;
}
