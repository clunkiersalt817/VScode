#include<stdio.h>
int main()
{
    float i,j,m,n,x,p,sum=0,fact=1;
    scanf("%f%f",&n,&x);
    for(i=1;i<=n;i++){
        m=1;
        fact=1;
        for(j=1;j<=i;j++){
            m=m*x;
            fact=fact*j;
        }
        sum=sum+m/fact;
    }
    printf("%f",1+sum);
    return 0;
}