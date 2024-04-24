/**
 Write a program that draws in the terminal a bigger X out of the character 'X',  
 depending on the variable int size (with size = 3, 4, ..., 20):
 size = 3:     size = 4:      size = 5:      etc.
   XX X         XX  X          XX   X
    XX           XXX            XX X
   X XX          XXX             XX
                X  XX           X XX
                               X   XX      */
#include <iostream>  // to allow use of std::cout and std::endl

using namespace std;

int main( ) {

  int size;
  cout << "Give size of X: ";
  cin >> size;

  for (int i = 0; i < size; i++){
    for (int j = 0; j < size + 1; j++){
      if ( i == j || i == j - 1){
        cout << "X";
      }
      else if ( i == size - j && i < size/2 ){
        cout << "X";
      }
      else if ( j == size - 1 - i && i >= size/2 ){
        cout << "X";
      }
      else {
        cout << " ";
      }
    }
    cout << endl;
  }


  return 0;
}
