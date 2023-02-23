#include <iostream>
#include <string> // for using String 

using namespace std;

int main() {
    int num;
    float fnum;
    double dnum;
    char ch;
    string str;

    // input integer
    cout << "Enter an integer: ";
    cin >> num;

    // input floating-point number
    cout << "Enter a floating-point number: ";
    cin >> fnum;

    // input double-precision floating-point number
    cout << "Enter a double-precision floating-point number: ";
    cin >> dnum;

    // input character
    cout << "Enter a character: ";
    cin >> ch;

    // input string
    cout << "Enter a string: ";
    cin >> str;

    // output the input values
    cout << "You entered the following values: " << endl;
    cout << "Integer: " << num << endl;
    cout << "Floating-point number: " << fnum << endl;
    cout << "Double-precision floating-point number: " << dnum << endl;
    cout << "Character: " << ch << endl;
    cout << "String: " << str << endl;

    return 0;
}

/**
 * `cin` is an object in C++ that is used for input operations. 
 * It is a part of the input/output library (iostream) in C++. `cin` stands for "console input". 
 * It reads the input from the standard input stream (usually the keyboard) and stores it in variables.
 * 
 * `cin` can be used with various data types such as int, float, double, char, string, etc.
 * For example, to read an integer from the user using `cin`, you can write:
 * 
 * example:
 *   int num;
 *   cin >> num; // reads the integer input from user and stores it in 'num'
 * 
 * 
 **/
