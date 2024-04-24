/**
  Write a program that asks the user for a number, and then prints out this number 
  in the terminal, followed by the half of the previous number until 
  the result is smaller than ten. So for 100 it would give out: 100, 50, 25.5, 12.25
  */

#include <iostream>  // to allow use of std::cout and std::endl
using namespace std;

int main( ) {
  double input_num;
  std::cout << "Enter a number: ";
  std::cin >> input_num;
  for (double i = input_num; i > 10; i /= 2){
    cout << i << endl;
  }
  return 0;
}
