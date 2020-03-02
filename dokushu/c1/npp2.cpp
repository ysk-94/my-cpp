#include <iostream>

int main() {
  int* ptr = 0;

  if (ptr == nullptr) {
    std::cout << "nullpo" << std::endl;
  } else {
    *ptr = 42;
  }
}
