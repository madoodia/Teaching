
// 1. C++ Header file ------------------
#include <iostream>
#include <string>

// 2. Third Party Header Files ---------

// 3. My Header Files ------------------

void edit(int a);
void change(int arr[], int size);
void change2(int *arr, int size);

struct Director
{
  const char *name;
  int age;
  int movies;
};

struct Movie
{
  // data (public)
  std::string title;
  std::string year;
  float budget;
  Director director;
};

int main()
{

  // int x = 10;
  // std::cout << "x: " << x << std::endl;
  // edit(x);
  // std::cout << "x: " << x << std::endl;

  // int numbers[5] = {10, 20, 30, 40, 50};

  // for (int i = 0; i < 5; i++)
  // {
  //   std::cout << "Number: " << numbers[i] << std::endl;
  // }

  // change(numbers, 5);
  // std::cout << "-----------------" << std::endl;

  // for (int i = 0; i < 5; i++)
  // {
  //   std::cout << "Number: " << numbers[i] << std::endl;
  // }

  // ---------------------------
  // // Struct
  // Movie movie1;
  // movie1.title = "Matrix";
  // movie1.year = "1999";
  // movie1.budget = 1000;
  // movie1.director.name = "Vachovski";
  // movie1.director.age = 45;
  // movie1.director.movies = 10;

  // Movie movie2;
  // movie2.title = "seven";
  // movie2.year = "1994";
  // movie2.budget = 500;

  // std::cout << "Title: " << movie1.title << std::endl;
  // std::cout << "Year: " << movie1.year << std::endl;
  // std::cout << "Budget: " << movie1.budget << std::endl;

  // std::cout << "----------------" << std::endl;

  // std::cout << "Title: " << movie2.title << std::endl;
  // std::cout << "Year: " << movie2.year << std::endl;
  // std::cout << "Budget: " << movie2.budget << std::endl;

  // // Array of struct
  // Movie movies[10];
  // movies[0].title = "asdasdasd";

  // ---------------------------
  // Pointer
  int x = 10;
  int *ptr = &x;
  int **sPtr = &ptr;

  std::cout << "x: " << x << std::endl;
  std::cout << "ptr: " << ptr << std::endl;
  std::cout << "&ptr: " << &ptr << std::endl;
  std::cout << "*ptr: " << *ptr << std::endl;
  std::cout << "sPtr: " << sPtr << std::endl;
  std::cout << "*sPtr: " << *sPtr << std::endl;
  std::cout << "**sPtr: " << **sPtr << std::endl;

  // Pointers and Arrays
  int nums[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int *p = nums; // &nums[0]
  *p = 10;
  p++;
  *p = 20;
  *(++p) = 30; // nums[2] = 30;
  p = nums + 3;
  *p = 40;

  change2(nums, 10);

  // pointers and Strings
  char name[] = "negar";
  const char *name2 = "negar";

  int *ptr2 = nullptr;

  return 0;
}

void edit(int a)
{
  a = 100;
}

void change(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    arr[i] = i * 100;
  }
}

void change2(int *arr, int size)
{
  for (int i = 0; i < size; i++)
  {
    arr[i] = i * 100;
  }
}