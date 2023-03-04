#include<iostream>
using namespace std;

// ==================================================
// What would be the output of the following code?
// ==================================================

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i=1; i<=rows; i++) {
        for (int j = rows - i; j >= 1; j--) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
