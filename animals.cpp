#include <iostream> 
#include <cstdlib>

class Animal {
 protected:
  std::string name;
 public: 
  Animal(std::string name) : name(name) {}
  virtual void print();
};

class Dog : public Animal {
 public:
  Dog(std::string name) : Animal(name) {}
  void print();
};

class Fish : public Animal {
 public:
  Fish(std::string name): Animal(name) {}
  void print();
};

void Animal::print() {
  std::cout << "Hi" << std::endl;
}

void Dog::print() {
  std::cout << "I am " << name << ". Bark!" << std::endl;
}

void Fish::print() {
  std::cout << "I'm " << name << std::endl;
}

int main() {
  Animal *animal;
  animal = new Dog("Scooby");
  animal->print();
  animal = new Fish("Salmon");
  animal->print();
  return 0;
};
