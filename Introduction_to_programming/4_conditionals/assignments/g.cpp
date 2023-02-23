#include<iostream>
using namespace std;

// ==================================================
// What would be the output of the following code?
// ==================================================

int main() {

    int x = 5, y = 10;
    
    if (x < y) {
        if (y < 20) {
            cout << "y is less than 20";
        } else {
            cout << "y is greater than or equal to 20";
        }
    } else {
        cout << "x is greater than or equal to y";
    }

    
    return 0;
}
