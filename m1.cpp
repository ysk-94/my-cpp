#include <iostream>
#include <string>
using namespace std;
class Neko {
  private: string name;
  public: Neko(string s) : name(s){}
  void naku() const{
    cout << "にゃぁ" << name << "だ" << endl;
  }
};


int main() {
  Neko dora("ボス");
  cout<<"asdf"<<endl;
  cout<<"lkj"<<endl;

  dora.naku();
}

