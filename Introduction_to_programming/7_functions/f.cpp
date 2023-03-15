#include<iostream>
using namespace std;

// User-Define Function:
//   Function with argument and no return value:

void greet(string name) {
    cout << "Hello " << name << "!" << endl;
}

int main() {
    greet("John"); // calling the function with argument
    return 0;
}
