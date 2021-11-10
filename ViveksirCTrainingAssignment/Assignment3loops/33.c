#include<stdio.h>
int main()
{
    int n,t,q,sum=0;
    printf("Enter any number : ");
    scanf("%d",&n);
    t=n;
    while(n!=0){
    q=n%10;
    sum=sum+(q*q*q);
    n=n/10;
    }
    if(sum==t){
        printf("The number %d is Armstrong.",t);
    }
    else{
        printf("The number %d is not Armstrong.",t);
    }
    return 0;
}