#include<iostream>
using namespace std;

int fib(int n)
{
    int a=1,b=1,c;
    if(n==1 || n==2)
        return 1;
    for(int i=3;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    return b;
}


int main()
{
    int n;
    cin>>n;
    cout<<fib(n);
return 0;
}