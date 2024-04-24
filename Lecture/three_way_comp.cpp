/** testing three-way-comparison operator and relational operator (3) and some type conversions
  Author: Dustin Busch , Date: 4/18/2024*/

#include <iostream>
#include <typeinfo>

using namespace std;

bool three_way_comparison(int n, int m);
bool relational_operator_three(int n, int m);
void type_conversion();

int main() {

int n;
int m;
cout << "Enter n: "; 
cin >> n;
cout << "Enter m: ";
cin >> m;
cout << three_way_comparison(n, m) << endl;;
cout << relational_operator_three(n, m) << endl;
type_conversion();
}

bool three_way_comparison(int n, int m) {
return (n <=> m > 0);
}

bool relational_operator_three(int n, int m) {
  bool result = (n < m) ? true : false;
  return result;
}

void type_conversion() {
  int i;
  double j;
  cout << "Type of i " << typeid(i).name() << endl;
  cout << "Type of j " << typeid(j).name() << endl;
  cout << "Type of div " << typeid(i/j).name() << endl;
  cout << "Type of sum " << typeid(i + j).name() << endl;
  cout << "Type of int to double " << typeid((double) i).name() << endl;
  cout << "Type of int to char" << typeid((char) i).name() << endl;
}





