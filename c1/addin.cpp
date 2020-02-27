#include <iostream>

using namespace std;

int input() {
  cout << ">";

  int x{};
  cin >> x;

  return x;
}

int main() {
  int sum = 0;

loop:
  int x = input();

  if (x != 0) {
    sum += x;
    cout << sum << endl;
    goto loop;
  }
}

