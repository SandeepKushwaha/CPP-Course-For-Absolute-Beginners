#include<cmath>
#include<iostream>
using namespace std;

// Built-in(Library) functions example

int main() {

    // sqrt() function : Calculates the power of a number.
    double x = 16.0;
    double result = sqrt(x);
    cout << "The square root of " << x << " is " << result << endl;
 
    // pow() function : Calculates the power of a number.
    double x = 2.0;
    double y = 3.0;
    result = pow(x, y);
    cout << x << " raised to the power of " << y << " is " << result << endl;

    // sin() function : Calculates the cosine of an angle in radians.
    double angle = 1.0;
    result = sin(angle);
    cout << "The sine of " << angle << " radians is " << result << endl;


    // cos() function : Calculates the cosine of an angle in radians.
    result = cos(angle);
    cout << "The cosine of " << angle << " radians is " << result << endl;

    return 0;
}
