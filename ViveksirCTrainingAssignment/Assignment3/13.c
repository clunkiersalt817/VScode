#include <stdio.h>

int series2(int n)
{
    int i,sum=0;
    for(i=1;i<=n;i++){
        if(i%2==0)
        sum=sum-i;
        else 
        sum=sum+i;
    }
    return sum;
}

int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);
    printf("%d",series2(n));
    return 0;
}