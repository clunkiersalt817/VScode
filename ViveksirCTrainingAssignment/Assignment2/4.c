#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);
    if(n<0)
    printf("The number is negative");
    else
    printf("The number is positive");
    return 0;
}