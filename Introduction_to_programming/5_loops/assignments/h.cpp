#include<iostream>
using namespace std;

// ==================================================
// What would be the output of the following code?
// ==================================================

int main() {
    int i = 0, j = 0;
    while(i < 5 || j < 5) {
        cout << "(" << i << ", " << j << ") ";
        i++;
        j++;
    }

    return 0;
}
