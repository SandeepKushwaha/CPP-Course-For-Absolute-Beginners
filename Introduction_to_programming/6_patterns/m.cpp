#include<iostream>
using namespace std;

// create a following pattern: (Half Pyramid)
// If n = 5 then pattern will be.
//
//     1
//    121
//   12321
//  1234321
// 123454321
//

int main() {

    int n;
    cout << "Enter the value for n: ";
    cin >> n;

    int i =1;
    while (i <= n) {
        // space (first triangle)
        int space = n - i;
        while (space) {
            cout << " ";
            space--;
        }
        // 2nd (second triangle{incresing values})
        int j = 1;
        while (j <= i) {
            cout << j++;
        }
        // 3rd (third triangle{decresing values})
        int k = i - 1;
        while (k >= 1) {
            cout << k--;
        }
        cout << endl;
        i++;
    }

    return 0;
}