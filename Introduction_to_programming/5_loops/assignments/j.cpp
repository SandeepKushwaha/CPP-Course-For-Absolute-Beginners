#include<iostream>
using namespace std;

// ==================================================
// What would be the output of the following code?
// ==================================================

int main() {
    int i = 0;
    while(true) {
        cout << i << " ";
        i++;
        if(i == 5) break;
    }
    
    return 0;
}
