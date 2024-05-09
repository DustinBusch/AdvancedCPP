#include<iostream>

int main() {
  bool myArray[50];
  for (int i = 1; i < 51; i++){
    if (i % 3 == 0){
      myArray[i - 1] = false;
    }
    else{
      myArray[i - 1] = true;
    }
  }
  for (int i = 0; i < 50; i++){
    std::cout << myArray[i];
  }
  std::cout << std::endl;
}
