/** Author: Dustin Busch, Lamda Functions **/


#include <iostream>

int main(){

  auto hello = [](){
    std::cout << "Hello World!!" << std::endl;
  };
  hello();

  return 0;
}
