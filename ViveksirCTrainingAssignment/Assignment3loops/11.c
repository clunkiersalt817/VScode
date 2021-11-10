#include<stdio.h>

int fact(int r){
    int fact=1;
    for(int i=1;i<=r;i++){
        fact=fact*i;
    }
    return fact;
}

int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);
    printf("%d",fact(n));
    return 0;
}