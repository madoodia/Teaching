#include <iostream>

// Constants
const int size = 50;
#define PI 3.1415

int main()
{
    // size = 100; // error
    // PI = 12.7;  // error

    std::cout << "pi number is: " << PI << std::endl;

    /* scope topic
    int A = 10;

    {
        std::cout << "A is: " << A << std::endl;
        A = 20;
        std::cout << "A is: " << A << std::endl;
    }

    {
        std::cout << "A is: " << A << std::endl;
        A = 100;
        std::cout << "A is: " << A << std::endl;
    }
    */

    // Assignment Operators ----------------------------------
    int X = 10;
    int Y = 20;
    int Z;
    Z = Y;

    // Arithmatic Operators ----------------------------------
    // + - * / %
    std::cout << "X+Y is: " << X + Y << std::endl;
    std::cout << "X-Y is: " << X - Y << std::endl;
    std::cout << "X*Y is: " << X * Y << std::endl;
    std::cout << "X/Y is: " << (float)X / Y << std::endl; // type casting
    std::cout << "X%Y is: " << X % Y << std::endl;

    // Coumpond Operators ----------------------------------
    // += -= *= /=  %=
    X += 1; // X = X + 1;
    X -= 1; // X = X + 1;

    // Increment & Decrement
    // ++ --
    X++; // X += 1;
    ++X; // X += 1;
    X--; // X -= 1;
    --X; // X -= 1;

    // Relational Operators (return boolean) ----------------------------------
    // < > <= >= != ==
    std::cout << "X > Y is: " << (X > Y) << std::endl;   // false
    std::cout << "X < Y is: " << (X < Y) << std::endl;   // true
    std::cout << "X == Y is: " << (X == Y) << std::endl; // fale
    std::cout << "X != Y is: " << (X != Y) << std::endl; // true

    // Logical Operators (return boolean) ----------------------------------
    // && || ! (and or not)
    /*
    && (and)
    false && false = false
    true && false = false
    false && true = false
    true && true = true
    */
    /*
    || (or)
    false || false = false
    true || false = true
    false || true = true
    true || true = true
    */
    /*
    ! (not)
    ! false = true
    ! true = false
    */
    std::cout << "(X > Y) && (X == Y) is: " << ((X > Y) && (X == Y)) << std::endl; // false
    std::cout << "(X < Y) && (X != Y) is: " << ((X < Y) && (X != Y)) << std::endl; // true
    std::cout << "!(X < Y) is: " << (!(X < Y)) << std::endl;                       // false

    // Bitwise Operators ----------------------------------
    // & | ~ ^ << >> (and or not xor left-shift right-shift)

    /*
    & (and)
    0 & 0 = 0
    1 & 0 = 0
    0 & 1 = 0
    1 & 1 = 1
    */
    /*
    | (or)
    0 | 0 = 0
    1 | 0 = 1
    0 | 1 = 1
    1 | 1 = 1

    ^ (xor)
    0 ^ 0 = 0
    1 ^ 0 = 1
    0 ^ 1 = 1
    1 ^ 1 = 0
    */
    /*
    ~ (not)
    ~ 0 = 1
    ~ 1 = 0
    */

    /*    
    1010
    0111
    0010 &  
    1111 |  
    1101 ^ 

    0000 0001 << 1 : 1
    0000 0010 << 1 : 2
    0000 0100 << 1 : 4
    0000 1000 << 1 : 8
    */
    unsigned int one = 1;
    std::cout << "(one << 1) is: " << (one << 31) << std::endl;
    std::cout << "(10 & 7) is: " << (10 & 7) << std::endl;
    std::cout << "(10 | 7) is: " << (10 | 7) << std::endl;
    std::cout << "(10 ^ 7) is: " << (10 ^ 7) << std::endl;

    /*
    11 Dec (odd number)
    1011
    &
    0001
    =
    0001
    */
    std::cout << "(11 & 1) is: " << (11 & 1) << std::endl; // one (odd)
    std::cout << "(12 & 1) is: " << (12 & 1) << std::endl; // zero (even)

    /*
    1010
    0000 ^
    1010

    1010
    1111 ^
    0101

    1110
    1111 ^
    0001
    */
    // Ternary Operator ----------------------------------
    // ?
    // (condition) ? true : false
    int W;
    W = (X > Y) ? X : Y;
    std::cout << "W = (X > Y) ? X : Y; is: " << W << std::endl;
    W = (X < Y) ? X : Y;
    std::cout << "W = (X < Y) ? X : Y; is: " << W << std::endl;

    // Comma Operator ----------------------------------
    int a;
    int b = (a = 100, a * 2, a / 4);
    std::cout << "b is: " << b << std::endl;

    // Type Casting ----------------------------------
    float f1 = 10.582f;
    int i1 = f1;      // implicit conversion
    int i2 = (int)f1; // explicit conversion
    std::cout << "i1 is: " << i1 << std::endl;

    // Operators' Precedence -------------------------
    // RnD

    return 0;
}