#include<iostream>
using namespace std;

// ==================================================
// What would be the output of the following code?
// ==================================================

int main() {
    int a = 5, b = 10, c = 15;

    if (a > b)
        cout << "a is greater than b" << endl;
    else if (b > c)
        cout << "b is greater than c" << endl;
    else
        cout << "c is greater than a and b" << endl;

    // A. "a is greater than b"
    // B. "b is greater than c"
    // C. "c is greater than a and b"
    // D. Nothing is printed

    return 0;
}
