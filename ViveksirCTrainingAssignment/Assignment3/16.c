#include <stdio.h>

int pow(int x,int n){
    if (n == 0)
        return 1;
    else
        return pow(x,n-1)*x;
}

int powsum(int x, int n)
{
    if (n == 1)
        return 1;
    else
        return powsum(x,n-1)+pow(x,n);
}

int main()
{
    int x, n;
    printf("Enter x and n : ");
    scanf("%d%d", &x, &n);
    printf("%d", powsum(x, n));
    return 0;
}