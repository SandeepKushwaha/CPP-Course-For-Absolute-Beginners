#include<iostream>
using namespace std;

/**
 * write a program to print 1 to n odd numbers. 
 * 
 */

int main() {

    // input n;
    int n;
    cout << "enter a number: ";
    cin >> n;

    int step = 0;

    // 0 - n ==> odd print
    while (step++ <= n) {
        if (step % 2 == 1)
            cout << step << endl;
    }

    return 0;
}