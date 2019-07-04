#include <stdio.h> 
 int main(void) { 
 // your code goes here 
 int n,i,x;
 x=1;
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
     for(int j=1;j<=i;j++)
     {
     printf("%d ",x);
 x++;
     }
     printf("\n");
     }
 return 0; 
}