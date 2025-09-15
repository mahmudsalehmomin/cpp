#include <iostream>
#include <string>
using namespace std;

class Person {       
  public:             
    bool has_girlfriend;
    string name;
    int age;
};

int main() {
  Person momin;
  Person shoaib;
  momin.has_girlfriend = true;
  momin.name = "Momin";
  momin.age = 24;

  shoaib.has_girlfriend = false;
  shoaib.name = "Mesta";
  shoaib.age = 22;

  cout << momin.has_girlfriend<<' '<<momin.name<<' '<<momin.age<<endl;
  cout << shoaib.has_girlfriend<<' '<<shoaib.name<< ' ' << shoaib.age<<endl;


  
  return 0;
}