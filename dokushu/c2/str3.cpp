#include <iostream>

struct S {
  int a;
  int b;
  int c;
};

int main() {
  S s;

  std::cout << &s.a << std::endl;
  std::cout << &s.b << std::endl;
  std::cout << &s.c << std::endl;
}

