#include <iostream>

int main()
{
  const int constant = 42;
  const int& ref_constant = constant;

  constant = 0;
  ref_constant = 0;

  int value = 72;
  int& ref = value;

  const int& creference = value;

  value = 0;
  ref = 72;
  creference = 0;
}

