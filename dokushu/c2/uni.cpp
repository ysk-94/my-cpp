#include <iostream>

union U {
  int a;
  int b;
  int c;
};

int main() {
  U u;

  std::cout << &u.a << std::endl;
  std::cout << &u.b << std::endl;
  std::cout << &u.c << std::endl;
}

