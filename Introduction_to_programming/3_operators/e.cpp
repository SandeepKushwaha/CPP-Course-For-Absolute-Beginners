#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int y = 5;
    bool result;

    // greater than
    result = x > y;
    cout << "x > y is " << result << endl; // output: x > y is 1

    // less than
    result = x < y;
    cout << "x < y is " << result << endl; // output: x < y is 0

    // greater than or equal to
    result = x >= y;
    cout << "x >= y is " << result << endl; // output: x >= y is 1

    // less than or equal to
    result = x <= y;
    cout << "x <= y is " << result << endl; // output: x <= y is 0

    // equal to
    result = x == y;
    cout << "x == y is " << result << endl; // output: x == y is 0

    // not equal to
    result = x != y;
    cout << "x != y is " << result << endl; // output: x != y is 1

    return 0;
}
