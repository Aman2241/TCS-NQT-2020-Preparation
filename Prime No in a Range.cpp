/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
using namespace std;
int main()
{
    int m,n,count;
    cin>>m>>n;     //m for lower value and n for higher value
    
    while(m<n)
    {
        count=0;
        for(int i=2;i<=m/2;++i)
        {
            if(m%i==0)
               { count=1;
                break;
        
               }
        }
        if(count==0)
            {cout<<m<<" ";
            }
    ++m;  
        
        
    }
    return 0;
}