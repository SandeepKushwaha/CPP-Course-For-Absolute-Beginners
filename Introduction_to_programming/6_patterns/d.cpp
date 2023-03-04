#include<iostream>
using namespace std;

// create a following pattern: 
// If n = 4 then pattern will be.
//
// 1234
// 1234
// 1234
// 1234
//
// printing the col number in every row.

int main() {

    int n;
    cout << "Enter the value for n: ";
    cin >> n;

    int row = 1;

    while (row <= n) {

        int col = 1;

        while (col <= n) {
            cout << col;
            col = col + 1;
        }

        cout << endl;
        row = row + 1;
    }

    return 0;
}