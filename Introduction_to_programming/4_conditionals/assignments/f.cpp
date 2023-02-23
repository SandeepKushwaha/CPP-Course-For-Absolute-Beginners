#include<iostream>
using namespace std;

// ==================================================
// What would be the output of the following code?
// ==================================================

int main() {

    int x = 5, y = 10;
    
    if (x > y) {
        cout << "x is greater than y";
    } else {
        if (x < 10) {
            cout << "x is less than 10";
        } else {
            cout << "x is greater than or equal to 10";
        }
    }
    
    return 0;
}
