#include<stdio.h>

void arm(){
    int i,d,n,t,sum=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    t=n;
    while(n!=0){
        d=n%10;
        sum=sum+(d*d*d);
        n=n/10;
    }
    if(t==sum)
    printf("number is armstrong.");
    else
    printf("given number is invalid");
}

int main()
{
    arm();
    return 0;
}