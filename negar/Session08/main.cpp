#include <iostream>

int globalVar = 10;

void printMe()
{
  int funcVar = 10;
  // do something
}

int main()
{
  /* -----------
  unsigned int num = 156235;
  short sh = num;

  // make its negative (two's complement)
  sh = sh * -1;
  // 0110001001001011
  // 1001110110110101
  */
  // ---------------------------------

  /*
  unsigned short b = 200;  // 2 byte
  unsigned int c = 300;    // 4 byte
  unsigned short b2 = 200; // 2 byte
  unsigned char a = 100;   // 1 byte
  unsigned char a2 = 100;  // 1 byte
  */
  // ---------------------------------
  // arrays: zero-based
  // int numbers[5]; // not initialized
  int numbers[5] = {1, 2, 3, 4, 5};                 // initialize (size = 20 byte)
  float scores[5] = {19.5, 18.4, 20.0, 10.6, 11.4}; // initialize (size = 20 byte)
  char name[5] = {'n', 'e', 'g', 'a', 'r'};
  // const char *name2 = "negar"; // pointer (for later)

  numbers[3] = 100;        // 4th element
  numbers[4] = 200;        // 4th element
  numbers[0] = numbers[4]; // 4th element
  numbers[0] = scores[0];  // cast: convert types 19.5 > 19
  numbers[0] = name[0];    // cast: convert types n > 110 (ascii code)

  // ------------------
  // escape characters in strings
  std::cout << "Hello World!\n";
  std::cout << "Names:\n";
  std::cout << "\tNegar\n";
  std::cout << "\tmadoodia\n";
  std::cout << "\t\"Anything\"\n";
  std::cout << "\t\\Anything\\\n";

  //--------------------
  // Numbers Suffix: f F L U

  int a, b, c; // variable define in single line

  //--------------------
  // naming convention (C++ is case-sensitive language)
  // letter(lowercase, UPPERCASE), numbers, underscore
  int test; // ok
  int Test; // ok
  int TEST; // ok

  int nSize;  // ok
  int n_size; // ok

  int _size; // ok (not recommended)
  // int 2_var; // wrong: don't start with numbers
  // int while; // wrong: don't use keywords
  // int class; // wrong: don't use keywords

  //--------------------
  // Scope: lifetime of the variables

  {
    int scopeVar = 100;
    std::cout << "inside scope: " << scopeVar << std::endl;
    std::cout << "global var in scope: " << globalVar << std::endl;
  }
  // std::cout << "outside scope: " << scopeVar << std::endl; // error: undefined variable
  std::cout << "global var in main: " << globalVar << std::endl;

  // initialization
  int q = {}; // usually use for arrays
  int x = {10};
  int y{20};
  int z = 30; // usual
  int w(30);

  return 0;
}
