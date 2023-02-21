#include<iostream>
using namespace std;

// ==================================================
// What would be the output of the following code?
// ==================================================

int main() {

    int a = 10, b = 20, c = 30;
    bool x = a > b && ++b < c;
    bool y = a < b || ++b < c;
    cout << "x = " << x << ", y = " << y << ", b = " << b << endl;

    return 0;
}