#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter any two integers : ");
    scanf("%d%d",&a,&b);
    if(a==b)
    printf("The two numbers are equal");
    else{
        if(a<b)
        printf("%d is smaller than %d",a,b);
        else
        printf("%d is greater than %d",a,b);
    }
    return 0;
}