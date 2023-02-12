#include<iostream>
using namespace std;

int main() {

    // basic primitive data types in c++
    
    short sh;
    int a;
    long ln;

    float f;
    double d;
    
    char ch;
    bool b;

    wchar_t wch;

    return 0;
}
/*
    Variable type, size and the range of data in there types in showen in the following table:

    Type                Typical Size in Bits                    Minimal Range
    ==========================================================================
    char                    8                                   −127 to 127
    unsigned char           8                                   0 to 255
    signed char             8                                   −127 to 127
    
    int                     16 or 32                            −32,767 to 32,767
    unsigned int            16 or 32                            0 to 65,535
    signed int              16 or 32                            same as int
    
    short int               16                                  −32,767 to 32,767
    unsigned short int      16                                  0 to 65,535
    signed short int        16                                  same as short int
    
    long	                32 (same as int on most systems)    -2,147,483,648 to 2,147,483,647
    long long	            64                                  -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
    
    long int                32                                  −2,147,483,647 to 2,147,483,647
    signed long int         32                                  same as long int
    unsigned long int       32                                  0 to 4,294,967,295
    
    float                   32                                  1.2 x 10^-38 to 3.4 x 10^38
    
    double                  64                                  2.3 x 10^-308 to 1.7 x 10^308
    
    long double             80                                  3.4 x 10^-4932 to 1.1 x 10^4932

    wchar_t                 16 or 32                            1 wide character

    Extra Note: 
    ===========================================================================
    wchar_t is a data type in C++ that represents wide characters, 
    which are typically used to represent characters in Unicode. 
    In C++, the wchar_t type is used to represent characters that can be any size, 
    usually 16 or 32 bits.

    The wchar_t type is useful when you need to support non-English or special 
    characters that are not represented by the standard char type. 
    The wchar_t type provides a way to store and manipulate wide characters, 
    which can include characters from multiple scripts and alphabets.

    For example, the following code declares a wide string and initializes it with a string literal:

    wchar_t wide_string[] = L"Hello, World!";
    
    The L before the string literal indicates that it is a wide string literal, 
    and the wchar_t type can be used to process the characters in the string. 
    The standard library functions for input/output and string manipulation, 
    such as wcout and wstring, can be used to handle wide characters.

    It's important to note that the size of wchar_t can vary between different implementations, 
    so you should consult your compiler's documentation for specific details.

*/