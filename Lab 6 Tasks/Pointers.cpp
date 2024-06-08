/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int
main ()
{
  int firstValue;
  int secondValue;

  //Create the pointer
  int *pPointer = nullptr;

  //Assign the pointer with the address of the first variable.
  pPointer = &firstValue;
  //Indirectly, assign a value to a pointer pointing to the address of the firstValue.
  *pPointer = 10;

  //Assign the pointer with the address of the second variable.
  pPointer = &secondValue;
  //Indirectly, assign a value to a pointer pointing to the address of the secondValue.
  *pPointer = 20;

  //Print out the values.
  cout << "The first value is " << firstValue<<endl;
  cout << "The second value is " <<secondValue<<endl;
  return 0;
}
