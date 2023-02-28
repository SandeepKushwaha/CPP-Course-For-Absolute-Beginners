#include<iostream>
using namespace std;

int main() {
    // Program to print 1 to n where n is the input form user.
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    // printing the number from 1 to n without looping.
    int step = 1;
    if (step <= n) cout << step << endl;
    step = step + 1;
    if (step <= n) cout << step << endl;
    step = step + 1;
    if (step <= n) cout << step << endl;
    step = step + 1;
    if (step <= n) cout << step << endl;
    step++;
    if (step <= n) cout << step << endl;
    // ...
    // ...
    //
    // If the number is let's say 20 or 100 or 1000 than 
    // according to above mechanism we need to write 
    // thousands or millions of lines of same code.
    // that is bad programming mechanism and also must failer if the 
    // print statement is less then the givin value n.

    return 0;
}