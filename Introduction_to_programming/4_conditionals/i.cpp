#include<iostream>
using namespace std;

int main() {
    int choice;
    cout << "Enter a number (0 or 1) : ";
    cin >> choice;

    switch(choice) {
        default:
            cout << "default choice.";
            
        case 0:
            cout << "case 0";
            break;

        case 1:
            cout << "case 1";
    }

    return 0;
}