#include<iostream>
using namespace std;

/**
 *
 * continue and break keywords in loops:
 *      The continue and break keywords are used to alter the flow of a loop in programming. 
 *      The continue keyword is used to skip the current iteration of the loop and move on to the next one.
 *      The break keyword is used to terminate the loop immediately without checking the condition
 *
 **/

int main() {

    int n = 15;

    // code for break
    for (int step = 1; step <= n; step++) {
        if (step % 5 == 0) 
            break;  
        cout << step << endl;
    }

    cout << endl;

    // code for continue.
    for (int step = 1; step < n; step++) {
        if (step % 5 == 0)
            continue;
        cout << step << endl;
    }

    return 0;
}