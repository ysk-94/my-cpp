#include <iostream>

class A {
  int v;

public:
  void set(int vlaue);
  int get() const;
  int get();
};

void A::set(int value) {
  v = value;
}

int A::get() const {
  return v;
}

int A::get() {
  return v;
}

int main() {
  A a;
  a.set(42);
  std::cout << a.get() << std::endl;

  const A& ca = a;
  ca.get();
}

