#include <iostream>

using namespace std;

int main() {
  cout << boolalpha;

  auto print = [](auto b) {
    cout << b << endl;
  };

  print( false || false );
  print( false || true  );
  print( true  || false );
  print( true  || true  );
}

