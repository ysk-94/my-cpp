#include <iostream>

int one()
{
  return 1;
}

int main()
{
  auto d = 3.14;
  d = 2.71f;

  std::cout << d << std::endl;
  
  auto i = one();
  i = 42.195;

  std::cout << i << std::endl;
}

