class A {
  int m_v;

public:
  explicit A(int);
  int v() const;
};

A::A(int v) : m_v(v) {
}

int A::v() const {
  return m_v;
}

int main() {
//  A x = 0;
  A y(42);

  y.v() == 42;
}
