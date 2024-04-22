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
    //Creating an array of length 5.
  int numbersArray[5];
  //Creating a pointer.
  int* pPointer = nullptr;
  
  //Assign address to the first element.
  pPointer = numbersArray;
  //Assign a value to the first element.
  *pPointer = 10;
  
  // Assign address to the second element by increamenting the pointer.
  pPointer++;
  //Assign a value to the second element.
  *pPointer = 20;
  
  // Assign address to the third element.
  pPointer = &numbersArray[2];
  //Assign the value to the third element.
  *pPointer = 30;
  
  pPointer = numbersArray + 3;
  *pPointer = 40;
  
  pPointer = numbersArray;
  *(pPointer+4) = 50;
  
  for (int i=0; i<5; i++){
      cout<<numbersArray[i]<<endl;
  }
  return 0;
}
