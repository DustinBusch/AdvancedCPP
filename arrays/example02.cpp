/**
  Write a program that lets a user fill an array of 10 integers, using a loop, 
  and then calculate and output the average of all given numbers to the terminal.
  Assume that the user enters a valid number each time. 
  */
#include <iostream>  // to allow use of std::cout, std::cin, and std::endl

using namespace std;

int main() {
  int myArray[10];
  int size = 0;
  float sum = 0;
  while (size < 10){
    cout << "Enter a value: ";
    cin >> myArray[size];
    sum += myArray[size];
    size++;
    cout << sum << endl;
  }

  cout << sum/10 << endl;

  return 0;
}
