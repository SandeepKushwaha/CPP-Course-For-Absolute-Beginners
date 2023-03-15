#include<iostream>
using namespace std;

// User-Define Function:
//   Recursive function

int factorial(int n) {
    // base case
    if(n==0) return 1; 
    // function call inself with smaller calculation
    return n*factorial(n-1); 
}

int main() {
    int n = 5;
    int result = factorial(n); // calling the function recursively
    cout << "Factorial of " << n << " is " << result << endl;
    return 0;
}
