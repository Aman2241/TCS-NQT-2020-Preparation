/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n,bin[20];
    
    cin>>n;
    int i=0;
    while(n>0)
    {
        bin[i]=n%2;
        n=n/2;
        i++;
    }
    
    for(int j=i-1;j>=0;j--)
    {
        cout<<bin[j]<<" ";
    }
    

    return 0;
}
