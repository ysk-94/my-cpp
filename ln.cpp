#include <iostream>
#include <string>

int main()
{
  std::string s;
  std::cout << "文字列";

  std::getline(std::cin, s);

  std::cout << "入力された文字列は" << s << std::endl;
}

