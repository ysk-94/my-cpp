#include <iostream>

int main() {
  int array[10] = {};
  std::size_t l = sizeof(array) / sizeof(int);
  std::cout << l << std::endl;
}

