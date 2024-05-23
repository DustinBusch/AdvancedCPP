#include <iostream>

class Element {  // class representing graphic element
 public:
  Element(double x, double y) : x(x), y(y) {}
  void print();
 private:
  double x, y;  // position of graphic element
};

class Rectangle : public Element {  // class representing a rectangle
 public:
  Rectangle(double x, double y, double a, double b) : Element(x, y), a(a), b(b) {}
 private:
  double a, b;  // width and height of rectangle
};

class Square : public Rectangle {  // class representing a square
 public:
  Square(double x, double y, double a) : Rectangle(x, y, a, a) {}
};

class Circle : public Element {
 public:
  Circle(double x, double y, double rad): Element(x, y), rad(rad) {};
  double Volume(); 
 private:
  static constexpr double PI = 3.14;
  double rad;
};

void Element::print() {
  std::cout << x << "," << y << std::endl;
}

double Circle::Volume() {
  double vol = PI * rad * rad;
  return vol;
}

int main() {
  Square s(5, 7, 12);  // s is a square at position (5,7) with width 12
  s.print();  // change the code above so this method prints out s' location: "5,7"
	return 0;
}

