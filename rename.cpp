#include <iostream>

class SCORE
{
public:
  using c = char;
  int get_value();
  void set_value(int);
  c get_moji();
  void set_moji(c);

private:
  int value;
  c moji;
};

int SCORE::get_value()
{
  return value;
}

void SCORE::set_value(int val)
{
  value = val;
}

SCORE::c SCORE::get_moji()
{
  return moji;
}

void SCORE::set_moji(c new_moji)
{
  moji = new_moji;
}

int main()
{
  using SC = SCORE;

  SC s;
  s.set_value(1);
  s.set_moji('h');

  std::cout << s.get_value() << std::endl;
  std::cout << s.get_moji() << std::endl;

}

