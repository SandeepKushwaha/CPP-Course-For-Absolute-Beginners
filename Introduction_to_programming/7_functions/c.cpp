#include<iostream>
using namespace std;

// void         ==> return type
// printTable   ==> function name
// int number   ==> input or integer variable named number 
//                  or printTable function parameter(param) 
// { ... }      ==> function body
//
void printTable(int number) {
    for (int i = 1; i <= 10; i++) {
        cout << number * i << endl;
    }
}

int main() {

    int number = 13;
    // function call 
    printTable(number); // printing table for 13;
    // function call
    printTable(17); // printing table for 17;

    return 0;
}
