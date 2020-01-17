#include <iostream>

int main() {
  auto a = []() {
    std::cout << "a" << "\n";
    return false;
  };

  auto b = []() {
    std::cout << "b" << "\n";
    return true;
  };

  bool c = a() && b();
  std::cout << std::boolalpha << c;
}

