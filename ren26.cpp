#include <iostream>
#include <string>

int hoge_main()
{

  std::string s;
  std::getline(std::cin, s);

  std::cout << s << std::endl;

  return 0;
}

int main() {

  int cnt = 0;
  std::string s;

  do
  {
    cnt++;
    std::getline(std::cin, s);

    std::cout << cnt << "行目";
    std::cout << s << std::endl;
  } while(s != "");
}

