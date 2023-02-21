#include<iostream>
using namespace std;

// ==================================================
// What would be the output of the following code?
// ==================================================

int main() {

    int a = 10;
    {
        int a = 20;
        cout << a << endl;
    }
    cout << a << endl;

    return 0;
}