#include<iostream>
using namespace std;

int main()
{
    //Creating a null pointer
    int* pPointer = nullptr;

    //Creating array
    int numbersArray[3] = {10, 20, 30};

    //Assign the first element to pointer
    pPointer = numbersArray;

    //Output the address of the element
    cout<<"Address at pPointer: "<<pPointer<<endl;
    cout<<"Address of numberArray[0]: "<<numbersArray<<endl;

    //Output the first element using the point and indirection
    cout<<"Value at pPointer: "<<*pPointer<<endl;

    //Output the value of the second element
    cout<<"Value at ++pPointer: "<<*(++pPointer)<<endl;

    //Assign address of element to pointer
    pPointer = numbersArray;

    //Output the value of the  first element
    cout<<"Value at pPointer++:"<<*(pPointer++)<<endl;

    return 0;
}
