#include<iostream>
using namespace std;

// ==================================================
// What would be the output of the following code?
// ==================================================

int main() {
    int i = 0;
    while(i < 5) {
        i++;
        if(i == 2) continue;
        if(i == 4) break;
        cout << i << " ";
    }

    return 0;
}
