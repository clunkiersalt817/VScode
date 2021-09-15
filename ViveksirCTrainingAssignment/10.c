//WAP to swap numbers using temporary variable.
#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter first and second number respectively : ");
    scanf("%d",&a);
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("The swapped numbers are a=%d and b=%d",a,b);
    return 0;
}