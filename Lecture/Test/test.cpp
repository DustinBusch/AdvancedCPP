#include<iostream>

class Test {
 private: 
  int attribute1;
 public:
  bool attribute2;
  void method1( int parameter ) { attribute1 = parameter; };
  void method2() { std::cout << attribute1 << std::endl;};
};

int main(){
  Test myTest;
  myTest.attribute2 = false;
  myTest.method1(21);
  return 0;
}
