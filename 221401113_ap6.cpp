#include <iostream>
using namespace std;

 
int
main ()
{
  
int a = 5;			// 101 dalam biner
  int b = 3;			// 011 dalam biner
  
    // Operasi bitwise AND
  int c = a & b;		// 001 dalam biner
  cout << "a & b = " << c << endl;
  
 
    // Operasi bitwise OR
  int d = a | b;		// 111 dalam biner
  cout << "a | b = " << d << endl;
  
 
    // Operasi bitwise XOR
  int e = a ^ b;		// 110 dalam biner
  cout << "a ^ b = " << e << endl;
  
 
    // Operasi bitwise Left Shift
  int f = a << 1;		// 1010 dalam biner
  cout << "a << 1 = " << f << endl;
  
 
    // Operasi bitwise Right Shift
  int g = a >> 1;		// 010 dalam biner
  cout << "a >> 1 = " << g << endl;
  
 
return 0;

}
