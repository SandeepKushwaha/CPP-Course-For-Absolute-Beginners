#include<iostream>
using namespace std;

// Operators in C++(CPP).

int main() {

    int a = 10; // assigning the value to the variable with assignment operator 
    int b = 20;
    cout << "a = " << a << " and b = " << endl; 

    return 0;
}

/**
 *
 *    There is Three types of Operators in CPP (C++).
 *
 *    Name/Type of Operators         Operators 
 *    ====================================================================================
 *
 *    1.  Unary Operators            ++ (increment) [example: a++ equivalent to a = a + 1]
 *                                   -- (decrement) [example: a-- equivalent to a = a - 1]
 *
 * 
 *    2. Binary Operators            Arithmetic operators                           
 *                                   =====================                            
 *                                   + (addition) [example: a+b]                           
 *                                   - (substraction) [example: a-b]
 *                                   * (multiplication) [example: a*b]
 *                                   / (divition) [example: a/b]
 *                                   % (modulas) [example: a%b]  
 *                                              
 * 
 *                                   Realtional operators                           
 *                                   =================                            
 *                                   < (less than) [example: a < b]
 *                                   <= (less than and equal to) [example: a <= b]
 *                                   > (greater than) [example: a > b]
 *                                   >= (greater than and equal to) [example: a >= b]
 *                                   == (equal to) [example: a == b]
 *                                   != (not equal to) [example: a != b]
 *                                              
 * 
 *                                   Logical operators                           
 *                                   =================                            
 *                                   && (AND) [example: true && ture equivalent to true]
 *                                   || (OR) [example: false || ture equivalent to true]
 *                                   ! (NOT) [example: !ture equivalent to false]
 * 
 *                                   Bitwise operators                           
 *                                   =================                            
 *                                   & (Binary AND) [example: a&n]
 *                                   | (Binary OR) [example: a|b]
 *                                   << (Binary left sift) [example: a<<b]
 *                                   >> (Binary right sift) [example: a>>b]
 *                                   ~ (Binary One's Complement) [example: ~a]
 *                                   ^ (Binary XOR) [example: a^b]
 * 
 *                                   Assignment operators                           
 *                                   =================                            
 *                                   = (Assignment) [example: a = b]
 *                                   += (Addtition and Assignment) [example: a += b equivalent to a = a + b]
 *                                   -= (Substraction and Assignment) [example: a -= b equivalent to a = a - b]
 *                                   *= (Multiplication and Assignment) [example: a *= b equivalent to a = a * b]
 *                                   /= (Divition and Assignment) [example: a /= b equivalent to a = a / b]
 *                                   %= (Modulus and Assignment) [example: a %= b equivalent to a = a % b]
 *      x
 *      
 *    3. Ternary Operators           ?: (Ternay or Conditional Operator) [example: (5 > 0) ? "+ve" : "-ve"]                                 
 *                                              
 **/