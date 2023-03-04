#include<iostream>
using namespace std;

// create a following pattern: (Half Pyramid)
// If n = 5 then pattern will be.
//
// A
// BC
// CDE
// DEFG
// EFGHI
//

int main() {

    int n;
    cout << "Enter the value for n: ";
    cin >> n;

    int row = 1;

    while (row <= n) {

        int col = 1;
        while (col <= row) {
            char value = 'A' + row + col - 2;
            cout << value;
            col = col + 1;
        }

        cout << endl;
        row = row + 1;
    }

    return 0;
}