//1 + x/1! + x 3 /3! + ………….x/n!

#include<stdio.h>
int main()
{
    int n,x,i,j,m,k=1,l,fact;
    float sum=0;
    scanf("%d%d",&x,&n);
    for(i=1;i<n;i++){
        m=1;
        fact=1;
        for(j=1;j<=k;j++){
            m=m*x;
        }
        for(l=1;l<=k;l++){
            fact=fact*l;
        }
        k=k+2;
        sum=sum+(float)m/fact;
    }
    printf("%f",1+sum);
    return 0;
}