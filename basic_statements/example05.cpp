/**
 Write a program that prints in the terminal all prime numbers from 3 till 99.   
 Remember: A number is a prime when any division by a smaller number results in
 a remainder that is never zero.
*/

#include <iostream>  // to allow use of std::cout and std::endl
#include <cmath>

using std::cout;
using std::endl;
using std::cin;

bool is_prime( int p );

int main( ) {

for (int j = 3; j < 100; j++){
  if (is_prime(j)){
    cout << j << endl;
  }
}


  return 0;
}

bool is_prime( int p ){
   for (int i = 2; i < sqrt(p) + 1; i++){
	if (p % i == 0){
	  return false;
	}
   }
   return true;
}
