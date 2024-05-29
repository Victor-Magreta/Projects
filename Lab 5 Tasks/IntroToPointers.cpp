/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int* pPointer = nullptr; // Creates a pointer and assigned a value of nullptr.
    int integer = 5; // Assigning 5 to integer variable.
    
    pPointer = &integer; // Assign the of an integer.
    
    cout<<"The integer is "<<integer<<endl; //Output the value stored in integer variable.
    cout<<"The address of the integer is "<<&integer<<endl; //Output the address of the integer.
    cout<<"The address asigned to the pointer is "<<pPointer<<endl;//Output the address assigned to pointer
    cout<<"The address of pointer is "<<&pPointer<<endl;//Output the address of the pointer
    
    return 0;
}