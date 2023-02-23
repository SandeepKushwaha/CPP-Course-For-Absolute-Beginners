#include <iostream>
using namespace std;

// cin.getline() is another input function that is used to read a line of input from the user, 
// including white space characters. It takes two arguments: 
// the first is a character array in which the input will be stored, and 
// the second is the maximum number of characters to read.

int main() {
   char name[20];
   cout << "Enter your name: ";
   cin.getline(name, 20);
   cout << "Hello, " << name << "!" << endl;
   return 0;
}
