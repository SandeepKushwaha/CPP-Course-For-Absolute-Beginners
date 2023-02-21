#include <iostream>
using namespace std;

int main() {
    int x = 10; // binary representation: 1010
    int y = 5;  // binary representation: 0101
    int result;

    // bitwise AND
    result = x & y; // binary representation: 0000
    cout << "x & y is " << result << endl; // output: x & y is 0

    // bitwise OR
    result = x | y; // binary representation: 1111
    cout << "x | y is " << result << endl; // output: x | y is 15

    // bitwise XOR
    result = x ^ y; // binary representation: 1111
    cout << "x ^ y is " << result << endl; // output: x ^ y is 15

    // bitwise NOT
    result = ~x; // binary representation: 11111111111111111111111111110101
    cout << "~x is " << result << endl; // output: ~x is -11

    // left shift
    result = x << 1; // binary representation: 10100
    cout << "x << 1 is " << result << endl; // output: x << 1 is 20

    // right shift
    result = x >> 1; // binary representation: 0101
    cout << "x >> 1 is " << result << endl; // output: x >> 1 is 5

    return 0;
}
