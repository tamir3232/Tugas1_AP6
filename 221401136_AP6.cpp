#include <iostream>
using namespace std;

int main(){
    system("CLS");
    int x,y,z;

    cout<< "Masukkan Nilai X: ";
    cin>>x;
    cout<< "Masukkan Nilai Y: ";
    cin>>y;
    cout<<"\nOPERATOR BITWISE\n";

    z = x & y; //AND
    cout<<"X and Y = "<<z<<endl;

    z = x | y; //OR
    cout<<"X or Y = "<<z<<endl;

    z = x ^ y; //XOR
    cout<<"X xor Y = "<<z<<endl;

    z = x >> 1;//shift right
    cout<<"X shift right 1 = "<<z<<endl;

    z = y << 1;//shift left
    cout<<"Y shift left 1 = "<<z<<endl;

    z = ~x;//Komplemen
    cout<<"Komplemen X = "<<z<<endl;




    return 0;
}