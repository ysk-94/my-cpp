#include <iostream>

int main() {
  auto show_value = [](int v) {
    std::cout << v << std::endl;
  };

  show_value(42);
}

