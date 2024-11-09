#include <iostream>
using namespace std;
int main() {
    int edad = 25;
    string rango =(edad < 13) ? "Niño" : 
    (edad <= 18 ? "Adolescente" : 
    (edad <= 65 ? "Adulto" : "Adulto Mayor"));
    std::cout << "Rango de edad: " << rango << std::endl;
}