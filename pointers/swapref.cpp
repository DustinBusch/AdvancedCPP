#include <iostream> 

void swap(int &a, int &b) {
  int tmp = b;
  b = a;
  a = tmp;

}

int main() {
  int a = 5, b = 10;
  swap(a, b);
  std::cout << a << ", " << b << std::endl;
  return 0;
}
