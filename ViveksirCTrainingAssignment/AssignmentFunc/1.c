#include <stdio.h>

int cube(int x)
{
    return x * x * x;
}

int main()
{
    int x;
    printf("Enter any number : ");
    scanf("%d", &x);
    printf("The cube of number %d is %d\n", x, cube(x));
    return 0;
}