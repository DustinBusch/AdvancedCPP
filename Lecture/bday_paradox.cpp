/** Programm: Birthday Paradox
 * Author: Dustin Busch, Date: 4/18/2024 */

#include <iostream>

using namespace std;

class BDay {
 
  public: 
    double prob(int n);
};

double BDay::prob(int n) {
  double p = 1.0;
  for (int i = 0; i < n; i++) {
    p = p * (365 - i)/365;
  }
  return 1-p;
}

int main()
{
  int n = 23;
  BDay b; 
  cout << "The chance that 2 out of " << n << " people have a same birthday is " << b.prob(n) << endl;
  return 0;
}
