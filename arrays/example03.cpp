/**
  Write a program that draws a histogram or bar chart through
  an array of 17 integers. To 'draw' the bars, use the string
  "\u2589" or an empty space.
  */
#include <iostream>  // std::cout, std::cin, and std::endl
#include <random>    // rand(), returns a pseudo-random int
int main() {
  int myArray[17];
  for (int i = 0; i < 17; i++) {  // fill array with random
    myArray[i] = ( rand() % 25 ); // numbers between 0 and 24
    
    std::cout << myArray[i];

    for (int j = 0; j < myArray[i]; j++){
      if (myArray[i] < 10 && j == 0){
        std::cout << " ";
      }
      std::cout << "\u2589";
    }
    std::cout << std::endl;
  }
  return 0;
}
