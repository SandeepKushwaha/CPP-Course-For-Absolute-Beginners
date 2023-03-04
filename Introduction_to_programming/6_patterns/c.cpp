#include<iostream>
using namespace std;

// create a following pattern: 
// If n = 4 then pattern will be.
//
// 1111
// 2222
// 3333
// 4444
//
// printing the row number in every col.

int main() {

    int n;
    cout << "Enter the value for n: ";
    cin >> n;

    int row = 1;

    while (row <= n) {

        int col = 1;

        while (col <= n) {
            cout << row;
            col = col + 1;
        }

        cout << endl;
        row = row + 1;
    }

    return 0;
}