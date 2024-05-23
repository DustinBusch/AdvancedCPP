class BaseClass {
 public:
  BaseClass(int var) : var(var) {}
 private:
  int var;
};

clas SubClass : public BaseClass {
 public:
  SubClass(bool myBool) : BaseClass(7), myBool(myBool) {}
 private:
  bool myBool;
};
