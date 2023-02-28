#include<iostream>
using namespace std;

/**
 * For loop: 
 *      The for loop is a more specialized loop that is used 
 *      when the number of iterations is known in advance. 
 *      
 *      The syntax for the for loop is as follows:
 * 
 *      for (initialization; condition; update) {
 *          // code to be executed
 *      }  
 *  
 */

int main() {

    // input n;
    int n;
    cout << "enter a number: ";
    cin >> n;

    for (int step = 1; step <= n; step++) {
        cout << step << " ";
    }
    
    return 0;
}