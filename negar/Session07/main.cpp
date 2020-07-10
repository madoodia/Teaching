#include <iostream>

static long num_steps = 100000;
double step;
int main()
{
  unsigned short sh; // 2 byte 0-65535
  sh = 256 + 65;     // 00000001 00000010
  // sh = sh + 10;
  unsigned char ch = sh; // 1 byte 0-255

  unsigned int i; // 4 byte 0-4B
  i = 50000;      // 00000000 00000000
  std::cout << "sh: " << sh << std::endl;
  std::cout << "ch: " << ch << std::endl;
  std::cout << "i: " << i << std::endl;
  // i = i + 10;
  unsigned char ch2 = i; // 1 byte 0-255
  unsigned char c1 = 255;
  unsigned char c2 = 255;
  unsigned char c3 = c1 + c2;

  unsigned char negCh = -120; // undefined value
  char negCh2 = -120;         // ok

  return 0;
}