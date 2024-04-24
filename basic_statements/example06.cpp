/**
 Write a program that draws in the terminal a big X out of the character 'X',  
 depending on the variable int size (with size = 3, 4, ..., 20):
 size = 3:     size = 4:      size = 5:      etc.
   X X          X  X           X   X
    X            XX             X X
   X X           XX              X
                X  X            X X
                               X   X      */
#include <iostream>  // to allow use of std::cout and std::endl

using namespace std;

int main( ) {
int size;

cout << "size: ";
cin >> size;

for (int i = 0; i < size; i++ ){
  for (int j = 0; j < size; j++){
    if ( i == j || i == size - j - 1){
      cout << "X";
    }
    else{
      cout << " ";
    }
  }
  cout << endl;
}
  
  return 0;
}
