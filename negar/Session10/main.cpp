#include <iostream>
#include <string>

int main()
{

  char name[] = "negar"; // array of characters

  // datatype variableName = value;
  std::string name2 = "negar";

  // std::cout << "name is: " << name << std::endl;
  // std::cout << "name is: " << name2 << std::endl;
  // std::cout << "length is: " << name2.size() << std::endl;

  // ------------ Standard Input ------------------
  // int age = 0;
  // std::cin >> age;

  // std::cout << "name is: " << name << std::endl;
  // std::cout << "age is: " << age << std::endl;

  // int a, b, c;

  // std::cin >> a >> b >> c;
  // std::cout << "numbers: " << a << ":" << b << ":" << c << std::endl;

  // char lName[] = "";
  // std::cin >> lName;
  // std::cout << "lName is: " << lName << std::endl;

  // use string
  // std::string lName = "";
  // std::cin >> lName;
  // std::cout << "lName is: " << lName << std::endl;

  // getting whole line
  // std::string lName = "";
  // getline(std::cin, lName);
  // std::cout << "lName is: " << lName << std::endl;

  // ---------------------------------------------------------
  // Control Statements
  // if ... else ...
  /*
  if(condition)
    statement1;
  else
    statement2;
  */
  // ------------------------
  /*
  if(condition)
  {
    statement1;
    statement1;
  }
  else 
  {
    statement2;
    statement2;
  }
  */
  // ------------------------
  /*
  if(condition)
  {
    statement1;
    statement1;
  }
  else if(condition)
  {
    statement2;
    statement2;
  }
  else
  {
    statement3;
    statement3;
  }
  */

  int x = 4;
  int y = 20;

  if (x > y)
    // if the condition result is true
    std::cout << "x > y" << std::endl;
  else if (y > x)
    // if the condition result is false
    std::cout << "x < y" << std::endl;
  else
    std::cout << "y == x" << std::endl;

  // switch ... case
  /*
  switch (expression)
  {
  case (constant-expression):
      code;
    break;
  case (constant-expression):
      code;
    break;
  
  default:
    break;
  }
  */
  // char letter;
  // std::cin >> letter;
  // switch (letter)
  // {
  // case 'A': // if(letter == 'A')
  //   std::cout << 65 << std::endl;
  //   break;
  // case 'B':
  //   std::cout << 66 << std::endl;
  //   break;
  // case 'C':
  //   std::cout << 67 << std::endl;
  //   break;
  // case 'D':
  //   std::cout << 68 << std::endl;
  //   break;

  // default:
  //   std::cout << "other" << std::endl;
  //   break;
  // }

  // Iteration Statements (Loops)
  // while
  int count = 10;
  while (count > 0)
  {
    std::cout << "Count: " << 10 - count << std::endl;
    count--;
  }

  std::cout << "---------------------" << std::endl;
  // do ... while

  int count2 = 10;
  do
  {
    std::cout << "Count2: " << 10 - count2 << std::endl;
    count2--;
  } while (count2 > 0);

  std::cout << "---------------------" << std::endl;
  // for loop
  // for(initialization;condition;increase) {statements;}
  int array[10] = {};
  for (int index = 0;
       index < 10;
       ++index)
  {
    array[index] = index;
  }

  for (int index = 0; index < 10; ++index)
  {
    std::cout << "array[" << index << "]: " << index << std::endl;
  }

  // Range-Based For Loop
  // for(declaration:range) {statements;}
  for (int x : array)
  {
    std::cout << "x: " << x << std::endl;
  }

  std::cout << "---------------------" << std::endl;
  // Jump Statement
  // goto, break, continue

  for (int x : array)
  {
    if (x > 5 && x < 8)
    {
      continue;
    }
    if (x == 8)
    {
      break;
    }
    std::cout << "x: " << x << std::endl;
  }

  // ---------------------------------------------------------
  return 0;
}