#include<iostream>
using namespace std;

int main() {
    int choice;
    cout << "Enter a number (0 or 1) : ";
    cin >> choice;

    switch(choice) {
        case 0:
            cout << "case 0";

        case 1:
            cout << "case 1";

        default:
            cout << "default choice.";
    }

    return 0;
}