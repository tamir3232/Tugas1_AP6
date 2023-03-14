
#include <iostream>

using namespace std;

int main()
{
    int a,b,dan,atau,tidak_a,tidak_b,xatau,kiri,kanan;
    cout<<"Masukkan Nilai a: "; cin>>a;
    cout<<"Masukkan Nilai b: "; cin>>b;
    
    dan = a & b; //and hitung
    atau = a | b; //or hitung
    tidak_a = ~ a; //not(a) hitung
    tidak_b = ~ b; //not(b) hitung
    xatau = a ^ b; //xor hitung
    kiri = a << b; //shift left hitung
    kanan = a >> b; //shift right hitung
    
    cout<<"Hasil AND: "<<dan<<endl;
    cout<<"Hasil OR: "<<atau<<endl;
    cout<<"Hasil NOT: "<<tidak_a<<endl;
    cout<<"Hasil NOT: "<<tidak_b<<endl;
    cout<<"Hasil XOR: "<<xatau<<endl;
    cout<<"Hasil SHIFT RIGHT: "<<kanan<<endl;
    cout<<"Hasil SHIFT LEFT: "<<kiri<<endl;

    return 0;
}