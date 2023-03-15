#include<iostream>
using namespace std;

// User-Define Function:
//   Function with no argument and return value:

int get_age() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    return age;
}

int main() {
    int age = get_age(); // calling the function and assigning the returned value to a variable
    cout << "Your age is " << age << endl;
    return 0;
}
