#include <fstream>

int main(){
  std::ifstream myFile("copyTest.cpp");
  std::ofstream myFileCopy("copyTest_copy.cpp");

  char c;
  while (myFile.get(c)) {
    myFileCopy << c;
  }
  return 0;
}
