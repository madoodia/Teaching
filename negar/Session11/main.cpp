#include <iostream>
#include <string>

// returnType name(parameter1, parameter2, ...) {statements;}

// Implementation
void printMe()
{
  std::cout << "Hello World!" << std::endl;
}

void printMsg(std::string msg);
void printMsg(int value);

int add(int a, int b)
{
  int result = a + b;
  return result;
}

// call by value
void increment(int a)
{
  a += 1;
  std::cout << "a: " << a << std::endl;
}

// declaration
void decrement(int a);

namespace name1
{
  int n1 = 10;
  void printMessage(const char *msg)
  {
    std::cout << "This is from name1 namespase: " << msg << std::endl;
  }
} // namespace name1

namespace name2
{
  int n1 = 20;
  void cout() {}
} // namespace name2

// using namespace std;
// using namespace name1;
// using namespace name2;

int main()
{
  std::string myName = "negar lajevardi";
  printMsg(myName);

  // Calling Function
  // Function without parameter
  printMe();

  // function with parameter
  printMsg("Hello Negar");
  printMsg("Bye Negar");

  int x = 10, y = 20;
  int result = 0;

  result = add(x, y);
  printMsg(result);
  name1::printMessage("WTF");

  int w = 10;
  std::cout << "w: " << w << std::endl;
  increment(w);
  std::cout << "w: " << w << std::endl;

  float w2 = 10.2;
  std::string w3 = "10.2";
  std::string w4 = "100";
  increment(w2); // implicit conversion
  // increment(w3);               // error
  increment(atoi(w4.c_str())); //

  decrement(w);

  int fromNamespace = name1::n1;
  int fromNamespace2 = name2::n1;

  return 0;
}

void decrement(int a)
{
  a -= 1;
  std::cout << "a: " << a << std::endl;
}

// Recursion

// overloading functions
void printMsg(std::string msg)
{
  std::cout << msg << std::endl;
}

void printMsg(int value)
{
  std::cout << value << std::endl;
}

// name visibility
// scope
// namespace