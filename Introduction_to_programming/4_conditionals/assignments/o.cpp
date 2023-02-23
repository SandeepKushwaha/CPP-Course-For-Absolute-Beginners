#include<iostream>
using namespace std;

// ==========================================
// Complete the following program.
// ==========================================

int main() {
    int first, second, calc = 0;
    char choice;
    
    cout << "Enter first number: ";
    cin >> first;
    cout << "Enter second number: ";
    cin >> second;

    cout << "Enter a sign (+, -, *, / or %) : ";
    cin >> choice;

    switch(choice) {
        // calculate for every arithmetic operators according to input sign.
        // code here.

        default:
            cout << "invalid choice.";
    }

    return 0;
}