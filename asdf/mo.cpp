#include <iostream>

using namespace std;

int main() {
  char hello[] = "Hello";

  char array[6] = { 'a', 'r', 'r' };
  array[3] = 'a';
  array[4] = 'y';
  array[5] = '\0';

  cout << hello << ", " << array << endl;
}

