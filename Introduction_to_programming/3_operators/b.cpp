#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int y = -x; // unary minus operator
    bool a = true;
    bool b = !a; // unary NOT operator

    cout << "x = " << x << endl; // output: x = 10
    cout << "y = " << y << endl; // output: y = -10
    cout << "a = " << a << endl; // output: a = 1
    cout << "b = " << b << endl; // output: b = 0

    return 0;
}