/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;


int swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    
    cout<<"Value of new a and b is"<<a<<" "<<b;
    cout<<endl;
return 0;
    
}
int sum_digits(int n)
{
    int rem,sum=0;
    int n1=n;
    while(n!=0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    
    cout<<sum<<" ";
    cout<<endl;
}

int prime_series(int l,int h)
{
    int flag;
    while(l<h)
    {
        flag=0;
        for(int j=2;j<=l/2;++j)
        {
            if(l%j==0)
                flag=1;
                break;
        }
        if(flag==0)
            cout<<l<<" ";
    ++l;
    }
    cout<<endl;
    return 0;
}





int prime(int n)
{
    int flag=0;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
            flag=1;
    }
    
    if(flag==0)
        cout<<"Prime no";
    else
        cout<<"Not prime no";
        
    cout<<endl;
return 0;
}


int fib(int n)
{
    if(n==1 || n==2)
        return 1;
    else
        return fib(n-1)+fib(n-2);
}


int main()
{
    int n;
    cin>>n;
   int  c=1;
  for(int i=1;i<=n;i++)
  {
      cout<<fib(i)<<" ";
  
     // c++;
  }
  cout<<endl;
  prime(n);
  prime_series(2,15);
  sum_digits(n);
  swap(3,2);
return 0;
    
}
        

