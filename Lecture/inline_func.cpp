/* Author: Dustin Busch, Some Inline function testing in c++ */

#include <iostream>
using namespace std;

inline void swap(int *i, int *j);


int main(){
  int a = 1;
  int b = 2;
  swap(&a, &b);
  cout << a << endl;
  cout << b << endl;
  return 0;
}

inline void swap(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}
