#include<iostream>
using namespace std;

// If-else if statement

int main() {
    int x = 10;

    if (x > 15) {
        cout << "x is greater than 15." << endl;
    }
    else if (x > 5) {
        cout << "x is greater than 5 but less than or equal to 15." << endl;
    }
    else {
        cout << "x is less than or equal to 5." << endl;
    }

    return 0;
}
