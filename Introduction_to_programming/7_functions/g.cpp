#include<iostream>
using namespace std;

// User-Define Function:
//   Function with argument and return value:

int add(int x, int y) {
    int sum = x + y;
    return sum;
}

int main() {
    int a = 5, b = 7;
    int result = add(a, b); // calling the function with arguments and assigning the returned value to a variable
    cout << "The sum of " << a << " and " << b << " is " << result << endl;
    return 0;
}
