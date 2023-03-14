/*  Nama=Adam M Firdaus
    Nim=221401083
    Kom=C
    Deskripsi=Tugas AP1 mengenai operator
*/
#include <iostream>
using namespace std;
int main(){

    int a,b,c;
    int wise_and,wise_left,wise_right,wise_xor,wise_or,kompl_a,kompl_b,kompl_c;
    cout<<"masukkan bilangan a=";
    cin>>a;
    cout<<"masukkan bilangan b=";
    cin>>b;
    cout<<"masukkan bilangan c=";
    cin>>c;
    
    
   wise_and=(a&b&c);
        cout<<"hasil dari a and b and c="<<wise_and<<endl;
   wise_left=(a<<b<<c);
        cout<<"hasil dari a shl b shl c="<<wise_left<<endl;
   wise_right=(a>>b>>c);
        cout<<"hasil dari a shr b shr c="<<wise_right<<endl;
   wise_xor=(a^b^c);
        cout<<"hasil dari a xor b xor c="<<wise_xor<<endl;
   wise_or=(a|b|c);
        cout<<"hasil dari a or b or c="<<wise_or<<endl;
   kompl_a=(~a);
        cout<<"hasil dari a komplemen="<<kompl_a<<endl;
   kompl_b=(~b);
        cout<<"hasil dari b komplemen="<<kompl_b<<endl;
   kompl_c=(~c);
        cout<<"hasil dari c komplemen="<<kompl_c<<endl;

}