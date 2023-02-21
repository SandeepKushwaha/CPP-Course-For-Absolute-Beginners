#include<iostream>
using namespace std;

// ==================================================
// What would be the output of the following code?
// ==================================================

int main() {

    int x = 10, y = 20;
    x ^= y ^= x ^= y;
    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}