#include <iostream>

void hello() {
  std::cout << "hello" << std::endl;
}

int main() {
loop:
  hello();
  goto loop;
}

