#include<iostream>
using namespace std;

// create a following pattern: (Half Pyramid)
// If n = 5 then pattern will be.
//
// 12345
// 1234
// 123
// 12
// 1
//

int main() {

    int n;
    cout << "Enter the value for n: ";
    cin >> n;

    int row = n;

    while (row >= 1) {

        int col = 1;
        while (col <= row) {
            cout << col;
            col = col + 1;
        }

        cout << endl;
        row = row - 1;
    }

    return 0;
}