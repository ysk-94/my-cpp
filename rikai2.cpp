#include <iostream>

class vector3d {
  int x;
  int y;
  int z;

public:
  int get_x();
  int get_y();
  int get_z();
  void set_x(int new_x);
  void set_y(int new_y);
  void set_z(int new_z);
};

int vector3d::get_x() {
  return x;
}

int vector3d::get_y() {
  return y;
}

int vector3d::get_z() {
  return z;
}

void vector3d::set_x(int new_x) {
  x = new_x;
}

void vector3d::set_y(int new_y) {
  y = new_y;
}

void vector3d::set_z(int new_z) {
  z = new_z;
}

vector3d set(int x, int y, int z = 0) {
  vector3d v3;
  v3.set_x(x);
  v3.set_y(y);
  v3.set_z(z);

  return v3;
}

int main() {
  int x, y, z;

  std::cin >> x;
  std::cin >> y;
  std::cin >> z;

  vector3d v3;
  v3.set_x(x);
  v3.set_y(y);
  v3.set_z(z);
}

