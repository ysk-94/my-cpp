#include <iostream>

int main()
{
  int value = 42;
  int other = 0;
  int* pointer = &value;
  int& reference = value;

  std::cout << "valueのアドレスは" << &value << "値は:" << value << std::endl;

  std::cout << "otherのアドレスは" << &other << "値は: " << other << std::endl;

  std::cout << "pointerの持つアドレスは" << pointer << "値は" << *pointer << std::endl;

  std::cout << "referenceのアドレスは" << &reference << "値は" << reference << std::endl;

  pointer = &other;
  reference = other;
  
  std::cout << "===============" << std::endl;

  std::cout << "valueのアドレスは" << &value << "値は:" << value << std::endl;

  std::cout << "otherのアドレスは" << &other << "値は: " << other << std::endl;

  std::cout << "pointerの持つアドレスは" << pointer << "値は" << *pointer << std::endl;

  std::cout << "referenceのアドレスは" << &reference << "値は" << reference << std::endl;

}

