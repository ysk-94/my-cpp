#include <iostream>

using namespace std;

void hello_n(int n) {
  if (n < 0) return;

  int i = 0;

  while(i !=n) {
    cout << "hello" << endl;
    i++;
  }
}

