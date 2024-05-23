#include <iostream>

class A {
 public:
  int x = 4;
  mutable int y = 3;
 protected: 
  int z = 5;
 private:
  friend class C;
  int c = 4;
};

class B : public A {
 public:
  using A::x;
}

class C : public A {
 public: 
  B() { A a; y = a.x;}
  int f(A a) {return a.x};
 private:
  int w;
}

int main() {
  const A a;
  a.y = 7;
  std::cout << a.y << "\n";
  B b;
  b.x = 7;
  A n; B m;
  std::cout << b.f(a) << "\n";
  return 0;
}
