#include<iostream>
using namespace std;

// ==================================================
// Write a function that takes an integer as input 
// and returns true if it is a prime number, false otherwise.
// ==================================================

bool isPrime(int number) {
    // code here.
}

int main() {

    int n;
    cout << "Enter number: ";
    cin >> n;

    if (isPrime(n)) {
        cout << "Given number is a prime number." << endl;
    } else {
        cout << "Given number is composite number." << endl;
    }

    return 0;
}