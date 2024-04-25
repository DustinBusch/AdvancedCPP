#include <iostream>
#include <algorithm>
#include <iterator>
int main(){
  char array[] = {'H', 'E', 'L', 'L', 'O'};
  std::for_each(std::begin(array), std::end(array)),
    [](char sym) { std::cout << sym << ' '; });
  std::cout << std::endl;
  return 0;
}
