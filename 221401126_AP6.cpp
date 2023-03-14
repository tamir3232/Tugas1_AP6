#include <iostream>

using namespace std;

int main() {
    system("CLS");
    int b = 3;
    int a = b++;
    int j = ++++b; //++ = 1 ++++ = 2
    bool k = 8 < 8;
    cout<<"Ini adalah b\t:\t" << b <<endl;
    cout<<"Ini adalah a\t:\t" << a <<endl;
    cout<<"Ini adalah c\t:\t" << j <<endl;
    cout<<"Ini adalah d\t:\t" << k <<endl;
    
    int c = 5 << 1;
    int d = 5 >> 1;
    int f = 5 & 1;
    int g = 4 | 1;
    int h = 4 ^ 1;
    int i = ~4;
    cout<<"Ini adalah c\t:\t" << c <<endl;
    cout<<"Ini adalah d\t:\t" << d <<endl;
    cout<<"Ini adalah f\t:\t" << f <<endl;
    cout<<"Ini adalah g\t:\t" << g <<endl;
    cout<<"Ini adalah h\t:\t" << h <<endl;
    cout<<"Ini adalah i\t:\t" << i <<endl;
    cout << "Inputkan a :\t";
    cin >> a;
    a = ~a;
    cout << "Not a\t:\t" << a;
}