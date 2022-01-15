#include <stdio.h>

int max_min(int x, int y)
{
    if (x == y)
    {
        return printf("Enter two different numbers !");
        
    }
    else
    {
        if (x > y)
        {
            return x;
        }
        else
            return y;
    }
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d is greater !!!", max_min(x, y));
    return 0;
}