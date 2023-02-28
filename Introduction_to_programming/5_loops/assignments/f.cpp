#include<iostream>
using namespace std;

// ==================================================
// What would be the output of the following code?
// ==================================================

int main() {
    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
            cout << "(" << i << ", " << j << ") ";
        }
    }

    return 0;
}
