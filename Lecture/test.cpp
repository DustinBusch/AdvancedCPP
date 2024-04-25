#include <iostream>
using namespace std;

void myFunction(int i, int b = 0);
void myFunction(float) = delete;

int main(){
  myFunction(7);
  myFunction(7, 3);
}

void myFunction(int i, int b){
  cout << i << endl;
  cout << b << endl;
}
