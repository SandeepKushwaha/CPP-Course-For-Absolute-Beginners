#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int y = 5;
    bool result;

    // logical AND
    result = (x > y) && (x % 2 == 0);
    cout << "(x > y) && (x % 2 == 0) is " << result << endl; // output: (x > y) && (x % 2 == 0) is 1

    // logical OR
    result = (x < y) || (x % 2 == 0);
    cout << "(x < y) || (x % 2 == 0) is " << result << endl; // output: (x < y) || (x % 2 == 0) is 1

    // logical NOT
    result = !(x > y);
    cout << "!(x > y) is " << result << endl; // output: !(x > y) is 0

    return 0;
}
