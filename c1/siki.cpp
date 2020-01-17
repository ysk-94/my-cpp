#include <iostream>

using namespace std;

int main() {
  if (1==1) {
    cout << "1 == 1 is true." << endl;
  } else {
    cout << "1 == 1 is false." << endl;
  }

  auto x = 1 == 1;
  if(x) {
    cout << "1 == 1 is true." << endl;
  }
  else {
    cout << "1==1 is false." << endl;
  }
}

