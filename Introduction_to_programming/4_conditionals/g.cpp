#include <iostream>
using namespace std;

/**
 * 
 * switch statement:
 *      The switch statement is used to execute different actions based on different conditions. 
 *      It takes an expression as input and compares it against multiple cases. 
 *      If a case is matched, the corresponding block of code is executed
 *
 * */ 

int main() {
    int day = 3;
    switch (day) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        default:
            cout << "Invalid day" << endl;
            break;
    }
    return 0;
}
