#include<iostream>

class Test {
 private: 
  int attribute1;
 public:
  bool attribute2;
  Test(int parameter) {
    attribute1 = parameter;
  }
  void method2() { std::cout << attribute1 << std::endl;};
};

int main(){
  Test myTest(21);
  return 0;
}
