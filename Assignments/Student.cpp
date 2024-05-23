# include <iostream> 

class Student{
 private:
  double *mark;
public:
  Student();
  ~Student();
  void setMark(double mark);
};

Student::Student(){
  mark = new double[5];
}

Student::~Student(){
  for (int i = 0; i < 5; i++) {
    std::cout << mark[i] << std::endl;
  }
  delete[] mark;
  mark = NULL;
}

void Student::setMark(double mark){
  for (int i = 0; i < 5; i++) {
    this->mark[i] = mark;
  }
}

int main() {
  Student s;
  s.setMark(1);
  return 0;
}
