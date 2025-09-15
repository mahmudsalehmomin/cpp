#include <iostream>
#include <string>
using namespace std;
class female 
{
    public:
    string name;
    string type;
    int age;
    bool is_married;
    bool have_bf;
    string bf_name;
    bool have_sex;


};


int main(){
    female anisa;
    anisa.name="Anisa";
    anisa.type="Magi";
    anisa.age = 21;
    anisa.is_married=false;
    anisa.have_bf = true;
    anisa.bf_name="mc";
    anisa.have_sex=true;

    cout <<anisa.name<<' '<<anisa.type<<' '<<anisa.age<<' '<<anisa.is_married<<' '<<anisa.have_bf<<' '<<anisa.bf_name<<' '<<anisa.have_sex<<endl;
    


}