#include <iostream>
#include <string>
using namespace std;
class Car {       
  public:             
    string type;
    string name;
    int cc;
    string color;
    bool f_drive;
    string packages;
};

int main() {
    Car civic;
    civic.type = "Sprots Sedan";
    civic.cc = 1500;
    civic.name = "Honda Civic G";
    civic.color = "Mint";
    civic.f_drive = true;
    civic.packages = "Thai Leather G TOP";

    



  
  return 0;
}