#include <iostream>

int main() {
  int value[] = {-20, 10, 5, -40, 0, 10, -30};
  int i = 0;

  do {
    if (value[i] < 0) {
      std::cout << "continue" << std::endl;
      ++i;
      continue;
    }

    if (value[i] == 0) {
      std::cout << "break" << std::endl;
      break;
    }

    std::cout << "elem=" << value[i] << std::endl;
    ++i;
  } while(i<7);

  std::cout << "終了" << std::endl;
}

