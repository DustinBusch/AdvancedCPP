/** Define the class' methods below so that the main function makes sense */
#include <iostream>     // terminal output
#include <functional>     // use std::function to pass functions as parameter

class NumberSequence {  // class for sequence of whole, positive numbers 
 public:
  NumberSequence(uint16_t length = 10); 
  // apply the function func() to all numbers:
  void forEach(std::function<uint16_t(uint16_t)> func);  
  void print() const;  // print all numbers to console
 private: 
  const uint16_t length;  // length of number sequence 
  uint16_t *seq;  // the numbers are stored as a dynamic array 
};

// define all NumberSequence methods here
 NumberSequence::NumberSequence(uint16_t length) : length(length) {
  seq = new uint16_t[length];
  for (uint16_t i = 0; i < length; i++) {
    seq[i] = i + 1;
  }
}
void NumberSequence::forEach(std::function<uint16_t(uint16_t)> func) {
  for (auto i = 0; i < length; i++) {
    seq[i] = func(seq[i]);
  }
}

void NumberSequence::print() const {
  for (auto i = 0; i < length; i++) {
    std::cout << seq[i] << std::endl;
  }
}

uint16_t times2(uint16_t n) { return n*2; }

int main() {
  NumberSequence s;
  s.print();
  s.forEach( &times2 ); // apply the function times2 to all numbers
  s.print();
  return 0;
}
