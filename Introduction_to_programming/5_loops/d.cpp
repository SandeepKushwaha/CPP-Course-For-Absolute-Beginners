#include<iostream>
using namespace std;

/**
 * 
 * write a program to print the table for the given input number.
 * 
 */

int main() {

    int n;
    cout << "enter a number: ";
    cin >> n;

    if (n < 1) {
        cout << "invalid input.";
        return 0;
    }

    int step = 1;

    while (step <= 10) {
        cout << (step++ * n) << endl;
    }

    return 0;
}