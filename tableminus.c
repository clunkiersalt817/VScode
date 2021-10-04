#include<stdio.h>
int main()
{
    int t,m,n,i;
    scanf("%d%d",&m,&n);
    for(i=1;;i++){
        m=m-n*i;
        if(m>=0)
        printf("%d\n",m);
        else 
        break;
    }
    return 0;
}