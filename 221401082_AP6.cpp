/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

 using namespace std;

    int main (){

        int a,b, j,k,l, x,y,z;
    
    cout<<"masukkan bilagang a:";
    cin>>a;
    cout<<"masukkan bilangan b:";
    cin>>b;

    j = a & b; // ini operator bitwise and 
    
    k = a | b; // ini operator bitwise OR
    
    x = ~ a;  // ini operator bitwise NOT a (komplemen a)
    
    l = ~ b; // ini operator bitwise NOT b (komplemen b)
    
    y = a >> b; // ini operator bitwise SHR
    
    z = a << b; // ini operator bitwise SHL
    
    cout<<"hasil AND adalah : "<<j<<endl;
    cout<<"hasil OR adalah : "<<k<<endl;
    cout<<"hasil NOT a adalah : "<<x<<endl;
    cout<<"hasil NOT b adalah : "<<l<<endl;
    cout<<"hasil SHR adalah : "<<y<<endl;
    cout<<"hasil SHL adalah :  "<<z<<endl;
    
    
    }
