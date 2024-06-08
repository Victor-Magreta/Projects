/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
#include<string>
#include<cstring>
#include <limits>

using namespace std;

int main()
{
    int value;

    while (true) {
        cout << "Please enter an integer value between 5 and 10: ";
        if (!(cin >> value)) {
            // Not an integer, prompt again
            cout << "Sorry, you entered an invalid number. Please try agin. ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else if (value < 5 || value > 10) {
            // Integer not in range, prompt again
            cout << "You entered "<<value<<". Please enter an integer between 5 and 10.";
        } else {
            // Integer in range, exit loop
            break;
        }
    }

    cout << "Your input value("<< value <<") has been accepted." << endl;
    return 0;
}

