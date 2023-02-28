#include<iostream>
using namespace std;

/**
 *
 * Do-While loop: The do-while loop is similar to the while loop,
 * but it guarantees that the code inside the loop will be executed at least once.
 * The syntax for the do-while loop is as follows:
 *
 * do {
 *    // code to be executed.
 * } while(condition);
 *
 **/

int main() {

    int n;
    cout << "Enter a value for n= ";
    cin >> n;

    int step = 1;

    // try input `n` with 0 or negative value.
    do {
        cout << step << endl;
        step++;
    } while (step <= n);

    return 0;
}