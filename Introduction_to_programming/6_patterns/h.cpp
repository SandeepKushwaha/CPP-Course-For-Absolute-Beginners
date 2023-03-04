#include<iostream>
using namespace std;

// create a following pattern: (Half Pyramid)
// If n = 5 then pattern will be.
//
// 1
// 23
// 345
// 4567
// 56789
//

int main() {

    int n;
    cout << "Enter the value for n: ";
    cin >> n;

    int row = 1;

    while (row <= n) {

        int col = 1;
        while (col <= row) {
            int value = row + col - 1;
            cout << value;
            col = col + 1;
        }

        cout << endl;
        row = row + 1;
    }

    return 0;
}