#include<iostream>
using namespace std;

// ==================================================
// What would be the output of the following code?
// ==================================================

int main() {
    int a = 5, b = 10;
    if (a > b) {
        if (b > 3)
            cout << "b is greater than 3" << endl;
    }
    else {
        if (a > 3)
            cout << "a is greater than 3" << endl;
        else
            cout << "neither a nor b is greater than 3" << endl;
    }

    // A. "b is greater than 3"
    // B. "a is greater than 3"
    // C. "neither a nor b is greater than 3"
    // D. Nothing is printed
    
    return 0;
}
