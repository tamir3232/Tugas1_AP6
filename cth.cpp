// Program menghitung
#include <iostream>
// 0110

using namespace std;

int main()
{
system("CLS");

int a = 6;
int b = 2;

int c = a & b;
int d = a | b;
int e = a << 1;
int f = b >> 1;

	cout << b << " Ini adalah B"<<"\n";
	cout << a << " Ini adalah A"<<"\n";
	cout <<"Berikut penggunaan a AND b = " << c << "\n";
	cout <<"Berikut penggunaan a OR b = " << d << "\n";
	cout <<"Berikut penggunaan a SHL 1 = " << e << "\n";
	cout <<"Berikut penggunaan b SHR 1 = " << f;

    return 0;
}
