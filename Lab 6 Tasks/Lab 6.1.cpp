/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    //Create null pointers
    int* pInteger = nullptr;
    string* pString = nullptr;
    
    //Allocate the memory.
    pInteger = new int;
    pString = new string;
    
    //Check if allocation is okay.
    if (!((pInteger=new int) && (pString=new string))){
        cout<<"Error: memory could not be allocated.";
    }
    else{
        cout<<"Enter any integer: ";
        cin>>*pInteger;
        cout<<"Enter any string: ";
        cin>>*pString;
        
        //Output the values of each variable.
        cout<<"The value of the dynamically allocated integer is "<<*pInteger<<endl;
        cout<<"The value of the dynamically allocated string is "<<*pString<<endl;
    }
    return 0;
}