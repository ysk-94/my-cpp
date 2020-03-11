#include <iostream>
#include <string>

class guitar {
  std::string name;

public:
  guitar();
  ~guitar();

  void set_name(std::string n);
};

guitar::guitar() {
  std::cout << "constructor" << std::endl;
}

guitar::~guitar() {
  std::cout << "destructor" << std::endl;
}

int main() {
  guitar g;
}
