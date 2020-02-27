#include <iostream>

using namespace std;

int main() {
  auto hello = []() {
    cout << "hello" << endl;
  };
  
  while(true) hello();
}

