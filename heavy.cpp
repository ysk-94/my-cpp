#include <iostream>

class heavy_class {
  in m_value;
  mutable int m_cache;

  mutable bool m_cache_valid;

public:
  int generate() const;

  void set(int value);
  int get() const;
};

int heavy_class::generate() const {
  std::cout << "おもい" << std::endl;
  return m_value;
}

void heavy_class::set(int vlaue) {
  m_cache_valid = false;
  m_value = value;
}

int heavy_class::get() const {
  if (m_cache_valid) {
    return m_cache;
  }

  m_cache = generate();
  m_cache_valid = true;

  return m_cache;
}

int main() {
  heavy_class heavy_object;

  heavy_object.set(100);

  std::cout << heavy_object.get() << std::endl;

  std::cout << heavy_object.get() << std::endl;

  heavy_object.set(200);

  std::cout << heavy_object.get() << std::endl;

  std::cout << heavy_object.get() << std::endl;
}

