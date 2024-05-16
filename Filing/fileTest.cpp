#include <iostream>
#include <fstream>

int main(){
  std::ifstream myFile("fileTest.cpp");
  
  char c;
  while (myFile.get(c)) {
    std::cout << c;
  }

  return 0;
}
