
// 1. C++ Header file ------------------
#include <iostream>
#include <string>

// 2. Third Party Header Files ---------
// #include <ANYTHING>

// 3. My Header Files ------------------
#include "mathLib.h"
// #include "header.h" // without header guard in header file will give error

// factorial (Recursive)
/*
6! = 6 * 5 * 4 * 3 * 2 * 1 = 720
6! = 6 * 5!
5! = 5 * 4!
4! = 4 * 3!
3! = 3 * 2!
2! = 2 * 1!
1! = 1
*/
int factorial(int num); // .h
int getCount(int arr[], int size);
// using namespace mathlib;

int main()
{
  // study recursive concept
  int num = 6;
  int result = 0;
  result = factorial(num);
  std::cout << "Factorial of " << num << " is: " << result << std::endl;
  std::cout << "---------------------------" << std::endl;

  // Rest of the day
  int x = 10, y = 20;
  mathlib::printMsg(mathlib::add(x, y));
  mathlib::printMsg(mathlib::sub(x, y));
  mathlib::printMsg(mathlib::mul(x, y));
  mathlib::printMsg(mathlib::divide(x, y));
  std::cout << "---------------------------" << std::endl;

  // Arrays
  int numbers[5] = {10, 20, 30, 40, 50};
  for (int i = 0; i < 5; i++)
  {
    std::cout << "Number: " << numbers[i] << std::endl;
  }

  // multi-dimensional aaray
  // int grid[3][4] = int grid[12]
  int grid[3][4] = {
      {10, 20, 30, 40},
      {100, 200, 300, 400},
      {1000, 2000, 3000, 4000}};

  // std::cout << "Number[2][3]: " << grid[2][3] << std::endl;

  int counter = 0;
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      std::cout << "grid[" << i << "][" << j << "]: " << grid[i][j] << std::endl;
      counter++;
    }
  }
  std::cout << "counter: " << counter << std::endl;

  std::cout << "---------------------------" << std::endl;

  // send array to function as parameter
  std::cout << "counter: " << getCount(numbers, 5) << std::endl;

  // Array of characters
  char name[] = {'N', 'e', 'g', 'a', 'r', '\0'};
  std::cout << "name: " << name << std::endl;

  return 0;
}

// .cpp
int factorial(int num)
{
  // in Stack
  if (num > 1)
    return num * factorial(num - 1);
  else
    return num;
}

int getCount(int arr[], int size)
{
  int counter = 0;
  for (int i = 0; i < size; i++)
  {
    counter++;
  }
  return counter;
}