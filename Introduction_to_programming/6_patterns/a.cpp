#include<iostream>
using namespace std;

// what are patterns and why is it important in programming?
//
// Patterns are arrangements of symbols or characters in a specific way, 
// often in a repeated or decorative manner. In programming,
// patterns can be used to create interesting designs, shapes, or images, 
// and can also be used to solve certain problems.

// create a following pattern: 
// If n = 4 then pattern will be.
//
// ****
// ****
// ****
// ****
//
// where '*' are depending on input number 'n'. 

int main() {

    int n;
    cout << "Enter the value for n: ";
    cin >> n;

    int row = 1;

    while (row <= n) {

        int col = 1;

        while (col <= n) {
            cout << "*";
            col = col + 1;
        }

        cout << endl;
        row = row + 1;
    }

    return 0;
}