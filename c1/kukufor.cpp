#include <iostream>

using namespace std;

int main() {
  for (int a = 1; a <= 9; ++a, cout << "\n") {
    for (int b = 1; b <= 9; ++b) {
      cout << a*b << "\t";
    }

  }
}

