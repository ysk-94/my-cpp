#include <iostream>

using namespace std;

int main() {
  // 身長
  double height{};
  cout << "height(m)>";
  cin >> height;

  // 体重
  double mass{};
  cout << "mass(kg)>";
  cin >> mass;

  double bmi = mass / (height * height);

  cout << "BMI=" << bmi << endl;

  auto status = [](double bmi) {
    if (bmi < 18.5) {
      return "痩せすぎ";
    } else if (bmi < 25.0) {
      return "ふつう";
    } else if (bmi < 30.0) {
      return "ちょいぽちゃ";
    } else {
      return "めたぼ";
    }
  };

  cout << status(bmi);
}

