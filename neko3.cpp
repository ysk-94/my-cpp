#include <iostream>
#include <string>

using namespace std;

class Neko {
  string name;
  public: Neko(string s);
          void naku() const;
};

Neko::Neko(string s) : name(s) {};

void Neko::naku() const {
  cout << "おれは" << name << "だ。" << endl;
}

int main() {
  string s;
  cout << "なまえをつけて" << endl;
  cin >> s;

  Neko mike(s);
  cout << "泣くよ" << endl;

  mike.naku();
}

