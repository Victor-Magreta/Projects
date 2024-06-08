/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cstdlib>
#include <limits>
using namespace std;

//The function to compute the area of Square.
double getArea1(double newLength){
    double area = newLength*newLength;
    return area;
}

//The function to compute the area of Rectangle.
double getArea2(double newLength, double newWidth){
    double area = newLength*newWidth;
    return area;
}

//The function to compute the area of Triangle.
double getArea3(double newBase, double newHeight){
    double area = (newBase*newHeight)/2;
    return area;
}

//The main function.
int main()
{
    double length; 
    double width; 
    double base; 
    double height; 
    double area;
    int choice;
    
    while(true){
    cout<<"Please select the area of the shape to calculate: \n";
    cout<<"1. Square \n2. Rectangle\n3. Triangle\n4. Quit Program\n";
        
        //Check if the input is string or a number.Otherwise prompt the user to reenter.
        if (!(cin >> choice)) {
            cout << "Sorry, you entered an invalid number. Please try again. \n\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        
        //Check if the number entered is in the range 1 to 4.Otherwise prompt the user to reenter.
        else if (choice<1 || choice>4){
            cout<<"Your input was "<<choice<<" which is an invalid input\nPlease enter valid input!!!!!!\n\n";
        }
        
        //A command to terminate the program if the input is 4.
        else if (choice==4){
            exit(0);
        }
            
        //Switch the case according to the input entered.
        else{
            switch(choice){
                case 1:
                    cout<<"Enter length of the square:\n";
                    cin>>length;
                    getArea1(length);
                    cout<<"The area of the square of length "<<length<<" is "<<getArea1(length)<<"\n\n";
                    break;
                    
                case 2:
                    cout<<"Enter length and width of the rectangle, seperated by space:\n\n";
                    cin>>length>>width;
                    getArea2(length, width);
                    cout<<"The area of the rectangle of length "<<length<<" and width "<<width<<" is "<<getArea2(length, width)<<"\n\n";
                    break;
                case 3:
                    cout<<"Enter the base and height of the Triangle, seperated by space:\n";
                    cin>>base>>height;
                    getArea3(base, height);
                    cout<<"The area of the triangle of base "<<base<<" and height "<<height<<" is "<<getArea3(base, height)<<"\n\n";
                    break;
            }
        }
    }
    return 0;
}
