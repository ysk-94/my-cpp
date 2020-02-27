#include <iostream>
#include <string>

int main() {
  std::string str = "hoge\0fuga";

  std::cout << str << std::endl;
}

