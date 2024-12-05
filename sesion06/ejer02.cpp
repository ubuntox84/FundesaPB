#include<iostream>
#include<string>
using namespace std;
class perro{
    private:
    string name;
    public:
    //get - set
    void setname(string);
    string getname();
};
void perro::setname(string n){
    this->name=n;
}
string perro::getname(){
    return this->name;
}
int main(){
    perro p;
    p.setname("Dukesa");
    cout<<p.getname();
    return 0;
}