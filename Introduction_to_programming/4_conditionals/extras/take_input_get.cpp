#include <iostream>
using namespace std;

// cin.get() is used to read a single character from the input stream, 
// including white space characters like spaces and tabs. 
// It takes one argument, which is the character variable in which the input will be stored. 
// It reads and returns the next character in the input stream.

int main() {
   char c;
   cout << "Enter a character: ";
   c = cin.get();
   cout << "You entered: " << c << endl;
   return 0;
}
