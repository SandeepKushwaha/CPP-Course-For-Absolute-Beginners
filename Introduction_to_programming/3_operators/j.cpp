#include <iostream>
using namespace std;

/*
    Bitwise operators in C++ are used to manipulate individual bits of a number. 
    There are six bitwise operators in C++, which are as follows:

    Bitwise AND (&)
    Bitwise OR (|)
    Bitwise XOR (^)
    Bitwise NOT (~)
    Left shift (<<)
    Right shift (>>)
*/

int main() {
    int a = 5; // binary: 00000101
    int b = 9; // binary: 00001001

    // Bitwise AND operator
    cout << "a & b = " << (a & b) << endl; // Output: 1 (binary: 00000001)

    // Bitwise OR operator
    cout << "a | b = " << (a | b) << endl; // Output: 13 (binary: 00001101)

    // Bitwise XOR operator
    cout << "a ^ b = " << (a ^ b) << endl; // Output: 12 (binary: 00001100)

    // Bitwise NOT operator
    cout << "~a = " << (~a) << endl; // Output: -6 (binary: 11111010)

    // Left shift operator
    cout << "b << 2 = " << (b << 2) << endl; // Output: 36 (binary: 00100100)

    // Right shift operator
    cout << "b >> 2 = " << (b >> 2) << endl; // Output: 2 (binary: 00000010)

    return 0;
}


/**
 * 
 * In this program, we have defined two integer variables a and b, 
 * and assigned them the values 5 and 9 respectively. 
 * We have then demonstrated the use of each of the six bitwise operators:
 * 
 * 
 * Bitwise AND (&) operator: It performs a bitwise AND operation between the bits of the two operands. 
 * The result is 1 only if both the corresponding bits are 1, else it is 0.
 * 
 * 
 * Bitwise OR (|) operator: 
 *      It performs a bitwise OR operation between the bits of the two operands. 
 *      The result is 1 if at least one of the corresponding bits is 1, else it is 0.
 * 
 * 
 * Bitwise XOR (^) operator: 
 *      It performs a bitwise XOR operation between the bits of the two operands. 
 *      The result is 1 only if the corresponding bits are different, else it is 0.
 * 
 * 
 * Bitwise NOT (~) operator: 
 *      It performs a bitwise NOT operation on a single operand. 
 *      It flips all the bits of the operand, i.e., it converts 0 to 1 and 1 to 0.
 * 
 * 
 * Left shift (<<) operator: 
 *      It shifts the bits of the left operand to the left by the number of 
 *      positions specified in the right operand. Zeros are filled in from the right.
 * 
 * 
 * Right shift (>>) operator: 
 *      It shifts the bits of the left operand to the right by the number of 
 *      positions specified in the right operand. Zeros are filled in from 
 *      the left if the left operand is non-negative, else ones are filled in.
 * 
 */