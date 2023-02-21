#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int y = 5;

    // addition assignment
    x += y;
    cout << "x += y is " << x << endl; // output: x += y is 15

    // subtraction assignment
    x -= y;
    cout << "x -= y is " << x << endl; // output: x -= y is 10

    // multiplication assignment
    x *= y;
    cout << "x *= y is " << x << endl; // output: x *= y is 50

    // division assignment
    x /= y;
    cout << "x /= y is " << x << endl; // output: x /= y is 10

    // modulus assignment
    x %= y;
    cout << "x %= y is " << x << endl; // output: x %= y is 0

    return 0;
}
