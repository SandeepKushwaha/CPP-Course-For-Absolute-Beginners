#include<iostream>
using namespace std;

int main() {

    // write a code for following.
    // input: percentage (0-100)
    // 90 <= p ==> A
    // 75 <= p and 90 > p ==> B
    // 60 <= p and 75 > p ==> c
    // 45 <= p and 60 > p ==> D
    // 45 > p ==> Fail
    // where A, B, C, D and Fail are the grades.

    int p = 0;
    cout << "Enter percentage: ";
    cin >> p;

    if (p < 0 || p > 100) { // out of range case
        cout << "Invalid Percentage input." << endl;
    } else if (90 <= p) { // for CASE A
        cout << "You got Grade: A" << endl;
    } else if (75 <= p && 90 > p) {
        cout << "You got Grade: B" << endl;
    } else if (60<=p && 75 > p){
        cout << "You got Grade: C" << endl;
    } else if(45<= p && 60 > p){
        cout << "You got Grade: D" << endl;
    } else {
        cout << "You got Grade: Fail" << endl;
    }

    return 0;
}