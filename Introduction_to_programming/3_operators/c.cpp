#include <iostream>
using namespace std;

int main() {
    int x = 10;

    // prefix increment operator
    cout << "x = " << x << endl; // output: x = 10
    cout << "++x = " << ++x << endl; // output: ++x = 11
    cout << "x = " << x << endl; // output: x = 11

    // postfix increment operator
    cout << "x = " << x << endl; // output: x = 11
    cout << "x++ = " << x++ << endl; // output: x++ = 11
    cout << "x = " << x << endl; // output: x = 12

    // prefix decrement operator
    cout << "x = " << x << endl; // output: x = 12
    cout << "--x = " << --x << endl; // output: --x = 11
    cout << "x = " << x << endl; // output: x = 11

    // postfix decrement operator
    cout << "x = " << x << endl; // output: x = 11
    cout << "x-- = " << x-- << endl; // output: x-- = 11
    cout << "x = " << x << endl; // output: x = 10

    return 0;
}
