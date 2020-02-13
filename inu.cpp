#include <iostream>
#include <string>
using namespace std;
class Inu {
  string name;
  public:
    Inu(string);
    void naku() const;
};

Inu::Inu(string s) : name(s) {}

void Inu::naku() const {
  cout << "わん" << name << endl;
};

int main() {
  string s;
  cin >> s;
  Inu hoge(s);
  hoge.naku();
}

