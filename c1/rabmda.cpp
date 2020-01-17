#include <iostream>

using namespace std;

int myplus (int x, int y) {
  return x + y;
}

string plst (string x, string y) {
  return x + y;
}

int main() {
  auto twice = [](auto x) {
    cout << x << " "s << x << "\n"s;
  };
  twice(5);

  auto x = myplus(1, 2);
  cout << x << endl;

  auto xs = plst("sakamura","yosuke");
  cout << xs << endl;
}

