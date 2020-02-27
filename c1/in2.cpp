#include <iostream>

using namespace std;

int main() {
  int i = 0;

loop:
  cout << i << ", ";
  ++i;
  goto loop;
}

