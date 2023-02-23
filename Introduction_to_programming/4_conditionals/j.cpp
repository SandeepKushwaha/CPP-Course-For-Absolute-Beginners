#include<iostream>
using namespace std;

int main() {
    int choice, square = 0;
    cout << "Enter a number (0 or 1) : ";
    cin >> choice;

    switch(choice) {
        case 0:
            cout << "enter a number: ";
            cin >> choice;
            if (choice > 0) cout << choice << " is positive";
            else if (choice < 0) cout << choice << " is negitive";
            else cout << choice << " is Zero";
            break;

        case 1:
            cout << "enter a number: ";
            cin >> choice;
            square = choice * choice;
            cout << "square of " << choice << " is " << square;
            break;

        default:
            cout << "invalid choice.";
            break;
    }

    return 0;
}