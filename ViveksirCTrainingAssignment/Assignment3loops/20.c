#include<stdio.h>
int main()
{
    int i;
    float k=0,j,m,n,x,p,sum=0,fact=1;
    scanf("%f%f",&n,&x);
    for(i=1;i<=n;i++){
        m=1;
        fact=1;
        k=k+2;
        for(j=1;j<=k;j++){
            m=m*x;
            fact=fact*j;
        }
        if(i%2==0)
        sum=sum-m/fact;
        else
        sum=sum+m/fact;
    }
    printf("%f",1+sum);
    return 0;
}