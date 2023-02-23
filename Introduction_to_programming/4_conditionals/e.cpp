#include<iostream>
using namespace std;

// Nested if-else if statement

int main() {
    int x = 10, y = 20;

    if (x > 15) {
        cout << "x is greater than 15." << endl;
    }
    else if (x > 5) {
        if (y > 15) {
            cout << "x is greater than 5 and y is greater than 15." << endl;
        }
        else {
            cout << "x is greater than 5 but y is less than or equal to 15." << endl;
        }
    }
    else {
        cout << "x is less than or equal to 5." << endl;
    }

    return 0;
}
