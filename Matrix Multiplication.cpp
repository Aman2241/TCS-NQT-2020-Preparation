/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int m,n,p,q;
    cin>>m>>n>>p>>q;
    int a[10][10],b[10][10],c[10][10];
//First matrix    
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
            cin>>a[i][j];

//Second matrix

    for(int i=1;i<=p;i++)
        for(int j=1;j<=q;j++)
            cin>>b[i][j];
// c[r][s]=0;       
//multiplication
for(int i=1;i<=m;i++)
{
    for(int j=1;j<=q;j++)
{
    c[i][j]=0;

for(int k=1;k<=n;k++)
{
c[i][j]+=a[i][k]*b[k][j];
}
}
}

for(int i=1;i<=m;i++)
{
    for(int j=1;j<=q;j++)
    {
        cout<<c[i][j]<<" ";
    }
    cout<<"\n";
}
 
 return 0;
    
}
