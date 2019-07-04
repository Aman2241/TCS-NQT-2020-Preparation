#include <stdio.h> 
 
 int prime(int n)
 {
     int i,flag,j;
     for(i=2;i<=n;++i)
     {
         flag=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
                flag++;
        }
     
     if(flag==2)
        printf("%d ",i);
}
return 0;
 }
 
 int main(void) { 
 // your code goes here 
 int n,i;
 scanf("%d",&n);

     prime(n);
 
 return 0; 
}