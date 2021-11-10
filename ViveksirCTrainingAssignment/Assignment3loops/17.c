#include<stdio.h>
int main()
{
    int i,j,m,n,x,sum=0;
    scanf("%d%d",&n,&x);
    for(i=1;i<=n;i++){
        m=1;
        for(j=1;j<=i;j++){
            m=m*x;
        }
        if(i%2==0)
        sum=sum+m;
        else
        sum=sum-m;
    }
    printf("%d",1+sum);
    return 0;
}