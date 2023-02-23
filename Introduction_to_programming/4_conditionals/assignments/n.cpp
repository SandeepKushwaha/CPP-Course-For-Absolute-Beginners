#include<iostream>
using namespace std;

// ==========================================
// Complete the following program for printing 
// the day according to choice.
// example : 
//      choice              output
//    ----------------------------------
//         1                Monday
//         2                Tuesday
//         3                Wednesday
//         4                Thursday
//         5                Friday
//         6                Saturday
//         7                Sunday
//
// ==========================================

int main() {
    int choice;
    cout << "Enter a number (between 1-7) : ";
    cin >> choice;

    switch(choice) {
        // code here for different cases

        default:
            cout << "invalid choice.";
    }

    return 0;
}