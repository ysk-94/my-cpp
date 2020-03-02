#include <iostream>

using namespace std;

int main() {
  int i = 0;
  int* pi = &i;
  *pi = 42;

  cout << i << endl;
}

