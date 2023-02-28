#include <iostream>
using namespace std;

/**
 *
 * While loop : The while loop executes a block of code repeatedly as long as the condition is true. 
 * The syntax for the while loop is as follows:
 * 
 *  while (condition) {
 *      // code to be executed
 *  } 
 * 
 */

int main() {

    int n;
    cout << "Enter the value for n: ";
    cin >> n;

    int step = 1;

    while (step <= n) {
        cout << step << endl;
        step = step + 1;
    }

    return 0;
}
