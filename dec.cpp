#include <iostream>

decltype(1) one()
{
  return 1;
}

int main()
{
  auto i = one();

  decltype(i) j;

  j = 42;

  std::cout << j << std::endl;
}

