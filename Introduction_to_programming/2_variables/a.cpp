#include <iostream>
using namespace std;

int main()
{

    // variable naming conventions example
    int aa;
    int Aa;
    int AA;
    int _;
    int _a;
    int abc_a;
    int x1, x2, x3, x4;
    int a_1;

    int my_variable;
    int newVariable;

    // incorrect ways of naming of a variable
    // int 1s;
    // int #b;
    // int ^e;
    // int my variable;
    // int hello-world;
    // int int;
    // int return;

    return 0;
}

/*

    Question:   what is variable?
    Answer:     A variable is a named storage location in a program that holds a value 
                that can change during the execution of the program. Variables are used to store values 
                that can be used later in the program, such as numbers, strings, and objects.



    Naming Convensions for a variable in c++
    =====================================================
    Naming a file or a variable is the first and the very basic step that a programmer takes to write clean codes,
    where naming has to be appropriate so that for any other programmer it acts as an easy way to read the code. 
    In C++, naming conventions are the set of rules for choosing the valid name for a variable and function in a C++ program.


    1. The class name should be a noun.

    2. Use upper case letters as word separators, and lower case for the rest of the word in the class name.

    3. The first character in the class name must be in upper case.

    4. No underscores (‘_’) are permitted in the class name.

    5. The private attribute name in class should be prepended with the character ‘m’.

    6. After prepending ‘m’, the same rules will be followed for the name as that for the class name.

    7. Character ‘m’ also precedes other name modifiers also. For example, ‘p’ for pointers.

    8. Each method/ function name should begin with a verb.

    9. The first character of function/ method argument names should be lowercase. All words starting after the first letter should be in the upper case with class names.

    10. The variable name should begin with an alphabet.

    11. Digits may be used in the variable name but only after the alphabet.

    12. No special symbols can be used in variable names except for the underscore(‘_’).

    13. No keywords can be used for variable names.

    14. Pointer variables should be prepended with ‘p’ and place the asterisk ‘*’ close to the variable name instead of the pointer type.

    15. Reference variables should be prepended with ‘r’. This helps to differentiate between the method returning a modifiable object and the same method returning a non-modifiable object.

    16. Static variables should be prepended with ‘s’.

    17. The global constants should be all capital letters separated with ‘_’.

    18. No special character is allowed in the file name except for underscore (‘_’) and dash (‘-‘).

    19. The file name should end with the .cc extension in the end or should end with the .cpp extension.

    20. Do not use filenames that already exist in /user/include. or any predefined header file name.

*/