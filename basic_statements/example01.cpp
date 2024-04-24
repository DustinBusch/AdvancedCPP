/**
  Write a program that initializes two integers 'number1' and 'number2', 
  and tests whether number1 is a multiple of number2. Put this result in the 
  boolean variable 'result' below.
  */


#include <iostream>
using namespace std;

int main(){
  int number1;
  int number2;
  cout << "Number 1: ";
  cin >> number1 ;
  cout << "Number 2: ";
  cin >> number2 ;
  
  if (number2%number1 == 0){
    cout << true << endl;
  }
  else{
  cout << false << endl;
  }
  return 0;
}
