#include <iostream>

class ConD {
 private:
 
 public:
  ConD(){
    std::cout << "hello" <<std::endl;
  }
  ~ConD(){
    std::cout << "bye" << std::endl;
  }
};

int main() {
  ConD Test;
  return 0;
}
