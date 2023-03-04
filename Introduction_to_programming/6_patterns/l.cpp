#include<iostream>
using namespace std;

// create a following pattern: (Half Pyramid)
// If n = 5 then pattern will be.
//
// 1 2 3 4 5 
// 6 7 8 9 10 
// 11 12 13 14 15 
// 16 17 18 19 20 
// 21 22 23 24 25
//

int main() {

    int n;
    cout << "Enter the value for n: ";
    cin >> n;

    int i = 1;
    int value = i;
    while (i++ <= n) {
        int col = 1;
        while (col++ <= n) {
            cout << value++ << " ";
        }
        cout << endl;
    }

    return 0;
}