#include<iostream>
using namespace std;

// functions in c++
// solving the problem without functions where 
// A and B are numbers then calculate A^B i.e. (A * A * A * ... B times)
// then print the answer.
// calculate the power for 2^3, 3^3, 2^5.

int main() {

    int a, b;
    cin >> a >> b; // let a = 2, b = 3;
    int ans = 1;
    for (int i = 1; i <= b; i++) {
        ans *= a;
    }
    cout << ans; // ans = 8;

    cin >> a >> b; // let a = 3, b = 3;
    ans = 1;
    for (int i = 1; i <= b; i++) {
        ans *= a;
    }
    cout << ans; // ans = 27;

    cin >> a >> b; // let a = 2, b = 5;
    ans = 1;
    for (int i = 1; i <= b; i++) {
        ans *= a;
    }
    cout << ans; // ans = 32;

    //... 

    // again the take input and calculate the same as above


    return 0;
}


/**
 * 
 * There are two types of functions in C++:
 *
 *  Built-in functions: 
 *      These functions are already defined in the C++ library and can be 
 *      used by simply including their respective headers. 
 *      Examples include printf, scanf, sqrt, abs, etc.
 * 
 *  User-defined functions: 
 *      These functions are created by the programmer and can be used to 
 *      perform specific tasks. 
 *      Examples include the add function, 
 *      functions to calculate the factorial of a number, 
 *      to check if a number is prime, etc.
 * 
 * 
 * There are several types of user-defined functions in C++, including:
 * 
 *  Functions with no return value and no arguments: 
 *      These functions are called void functions and are used to perform a 
 *      specific task without returning any value. 
 *      Example: void displayMenu().
 *  
 *  Functions with no return value but with arguments: 
 *      These functions are used to perform a specific task by taking input 
 *      arguments without returning any value. 
 *      Example: void printArray(int arr[], int n).
 * 
 *  Functions with a return value and no arguments: 
 *      These functions are used to return a value after performing a 
 *      specific task without taking any input arguments. 
 *      Example: int generateRandomNumber().
 * 
 * Functions with a return value and with arguments: 
 *      These functions are used to perform a specific task by taking input 
 *      arguments and returning a value. 
 *      Example: int findMax(int arr[], int n).
*/