#include <iostream>

int main() {
  int myArray[10];
  int i = 0;
  double sum = 0;
  while (i != 10)
  { 
    std::cout << "Please input a number: ";
    std::cin >> myArray[i];
    std::cout << std::endl;
    sum += myArray[i];
    i++;
  }
  double avg = sum / (double) 10;
  std::cout << avg << std::endl;
}
