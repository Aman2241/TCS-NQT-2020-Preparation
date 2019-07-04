/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//This programm will compare two string that they are equal or not

#include <iostream>
#include <string>
using namespace std;

int main()

{
    
    string str1,str2;
    getline(cin,str1);
    getline(cin,str2);
    int n1=str1.length();
    int n2=str2.length();
    if(n1==n2)   //size will be equal then only perform the operation
    {
    
    if(str1==str2)    //comparing the string
    {
        cout<<"String are equal";
    }
    else
    {
        cout<<"String are not equal";
    }
    
    }
    
    else
    {
        cout<<"String size are not equal so it is not comparable";
    }
    return 0;
}
