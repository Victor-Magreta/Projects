/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int main()
{
    string elem;
    string array[8] = {"B123","C234","A345","C15","B177","G3003","C235","B179"};
    for(string elem: array){
        if (elem.at(0)=='B')
            cout<<elem<<endl;
    }
    return 0;
}
