#include <iostream>

using namespace std;

union U {
  int a;
  int b;
  int c;
};

int main() {
  U u = { 42 };

  cout << u.a << u.b << u.c << endl;

  u.c = 1231;
  cout << u.a << u.b << u.c << endl;
}
