#include <iostream>

struct vector2d
{
  int x;
  int y;
};

int add(int left, int right)
{
  return left + right;
}

int sub(int left, int right)
{
  return left - right;
}

int add(int a, int b, int c, int d)
{
  return a + b + c + d;
}

double add (double left, double right)
{
  return left + right;
}

vector2d add(vector2d left, vector2d right)
{
  vector2d v;
  v.x = left.x + right.x;
  v.y = left.y + right.y;
  return v;
}

vector2d sub(vector2d left, vector2d right)
{
  vector2d v;
  v.x = left.x - right.x;
  v.y = left.y - right.y;
  return v;
}

int main()
{
  int integer = add(1, 2);
  std::cout << integer << std::endl;
  int anw = add(1, 2, 3, 4);
  std::cout << anw << std::endl;

  double floating = add(3.14, 42.195);
  std::cout << floating << std::endl;

  vector2d v = { 1, 2 };
  vector2d u = { -3, 4 };

  vector2d w = sub(v, u);
  std::cout << w.x << ", " << w.y << std::endl;
}

