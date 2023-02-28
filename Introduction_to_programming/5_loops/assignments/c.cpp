#include<iostream>
using namespace std;

// ==================================================
// What would be the output of the following code?
// ==================================================

int main() {
    int i = 0;
    while(i<5){
        cout << i << " ";
        if(i == 2) break;
        i++;
    }

    return 0;
}
