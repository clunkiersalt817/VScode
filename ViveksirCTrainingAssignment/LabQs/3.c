#include<stdio.h>
int main()
{
    int n,i,j,k=1,l,p=2;
    float sum=0,m,fact=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        m=1;
        for(j=1;j<=k;j++){
            m=m*i;
        }
        for(l=1;l<=p;l++){
            fact=fact*l;
        }
        p=p+2;
        k=k*3;
        sum=sum+m/fact;
    }
    printf("%f",sum);
    return 0;
}