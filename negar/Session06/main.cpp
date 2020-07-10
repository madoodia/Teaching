#include <iostream>

// Entry Point
int main()
{
  // boolean
  bool state = true;
  std::cout << "bool: " << sizeof(bool) << std::endl;

  // character
  char ch = 'N';
  char ch2 = 105;
  std::cout << "char: " << sizeof(char) << std::endl;
  std::cout << "ch: " << ch << std::endl;
  std::cout << "ch: " << ch2 << std::endl;

  // short
  short sh = 15;
  std::cout << "short: " << sizeof(short) << std::endl;
  std::cout << "sh: " << sh << std::endl;

  // integer
  int i = 2147483647;
  std::cout << "int: " << sizeof(int) << std::endl;
  std::cout << "i: " << i << std::endl;

  // long integer
  long int li = 100;
  std::cout << "long int: " << sizeof(long int) << std::endl;

  // floating point (single precission)
  float f = 10.5;
  std::cout << "float: " << sizeof(float) << std::endl;

  // floating point (double precission)
  double d = 3.1415;
  std::cout << "double: " << sizeof(double) << std::endl;

  return 0;
}

/*
// Entry Point
int main()
{
  // C = A + B;
  // dataType variableName = value;
  int A = 100;
  int B = 200;
  long int C;
  C = A + B;

  std::cout << "C = " << C << std::endl;
  return 0;
}
*/