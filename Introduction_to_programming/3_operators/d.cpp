#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int y = 3;
    int result;

    // addition
    result = x + y;
    cout << "x + y = " << result << endl; // output: x + y = 13

    // subtraction
    result = x - y;
    cout << "x - y = " << result << endl; // output: x - y = 7

    // multiplication
    result = x * y;
    cout << "x * y = " << result << endl; // output: x * y = 30

    // division
    result = x / y;
    cout << "x / y = " << result << endl; // output: x / y = 3

    // modulus
    result = x % y;
    cout << "x % y = " << result << endl; // output: x % y = 1

    // increment
    result = ++x;
    cout << "++x = " << result << endl; // output: ++x = 11

    // decrement
    result = --y;
    cout << "--y = " << result << endl; // output: --y = 2

    return 0;
}
