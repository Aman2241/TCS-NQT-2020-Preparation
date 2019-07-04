#include<stdio.h>
int main(void)
{
    int n,i,sum;
    sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==1)
        {
            sum=sum+i*i;
        }
    }

    printf("%d",sum);
    return 0;
}