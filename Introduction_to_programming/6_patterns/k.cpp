#include<iostream>
using namespace std;

// create a following pattern: (Half Pyramid)
// If n = 5 then pattern will be.
//
// *         
// * *       
// *   *     
// *     *   
// * * * * * 
//

int main() {

    int n;
    cout << "Enter the value for n: ";
    cin >> n;

    int row = 1;
    while (row <= n) {

        int col = 1;
        while (col <= n) {
            if (row == col) cout << "* " ;
            else if (col == 1) cout << "* " ;
            else if (row == n) cout << "* " ;
            else
                cout << "  ";
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}