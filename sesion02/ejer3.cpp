#include<iostream>
using namespace std;

int main() {

int nacimiento,actual, anios=0, meses=0, dias=0;

cout<<"Digite su año de nacimineto: "<<endl;
cin>>nacimiento;
cout<<"Digite la fecha actual: "<<endl;
cin>>actual;
int contn,contb;
for(int i=nacimiento;i<=actual;i++){
    if((i%4==0 && i%100!=0)|| (i%400==0))
    contb++;
    else
    contn++;
    //cout<<i<<" ";
}

anios = actual - nacimiento;
meses=anios*12;
dias=(contb*366)+(contn*365);

cout<<"Su edad es: "<<anios<<endl;
cout<<"En mese es: "<<meses<<endl;
cout<<"En dias: "<<dias<<endl;

return 0;
}
