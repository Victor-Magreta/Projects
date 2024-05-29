#include <iostream>
#include <string>
#include <istream>
using namespace std;

int main()
{

    int rows;
    int columns;
    
    //Obtain rows
    cout<<"Enter number of rows: ";
    cin>>rows;
    //Obtain columns
    cout<<"Enter number of columns: ";
    cin>>columns;
    
    //Check if the number of rows and columns exceed 3, if prompt the user to reente.
    while(rows>3 || columns>3){
        cout<<"Rows or columns exceed 3. Please try again.\n\n";
        cout<<"Enter number of rows: ";
        cin>>rows;
        cout<<"Enter number of columns: ";
        cin>>columns;
    }
    
    //Allocate a 2D array in memory.
    double** array = new double*[rows];
    for(int i = 0; i < rows; ++i)
        array[i] = new double[columns];
    
    //Enter the elements of the array.
    cout<<"Enter numbers:\n";
    for (int i=0; i<rows; i++){
        for (int j=0; j<columns; j++){
            cin>>array[i][j];
        }
    }
    
    //Output the values.
    cout<<"The values of each element of the array are:\n";
    for (int i=0; i<rows; i++){
        for (int j=0; j<columns; j++){
            cout<<array[i][j]<<" ";
        }
        cout<<"\n";
    }

    //Deallocate the array.
    for(int i = 0; i < rows; ++i)
        delete [] array[i];
    delete [] array;

    return 0;
}