#include <iostream>
using namespace std;

class Rocket {
  int nenryo;
  int sokudo;

  public:
    Rocket(int x);
    void kasoku();
};

Rocket::Rocket(int x) : nenryo(x), sokudo(0) {};

void Rocket::kasoku() {
  if (nenryo >= 2) {
    sokudo += 2;
    nenryo -= 2;
    cout << "速度: " << sokudo << endl;
    cout << "燃料: " << nenryo << endl;
  } else {
    cout << "燃料切れ" << endl;
  }
}

int main() {
  cout << "数字を入力" << endl;
  int n;
  cin >> n;

  Rocket r(n);
  r.kasoku();
  r.kasoku();
  r.kasoku();
}

