#include<iostream>
using namespace std;

/**
 *
 * Write a progrm to print even numbers. form 1 to n.
 * where n is input given by user.
 *
 **/

int main() {

    int n;
    cout << "Enter the number : ";
    cin >> n;

    for (int step = 2; step <= n; step += 2) {
        cout << step << endl;
    }

    return 0;
}