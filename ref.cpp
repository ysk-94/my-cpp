#include <iostream>

int main()
{
  int value = 42;

  std::cout << "valueのアドレス" << &value << "あたいは: " << value << std::endl;

  int& reference = value;

  std::cout << "referenceのアドレス" << &reference << "値: " << reference << std::endl;
}

