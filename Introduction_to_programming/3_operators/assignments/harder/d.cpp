#include<iostream>
using namespace std;

// ==================================================
// What would be the output of the following code?
// ==================================================

int main() {

    int a = 10;
    int b = 20;
    int c = 30;
    cout << ((a > b) ? (a > c ? "a is largest" : "c is largest") : (b > c ? "b is largest" : "c is largest")) << endl;

    return 0;
}