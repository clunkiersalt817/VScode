#include <stdio.h>
int main()
{
    int i, n = 1, cnt = 1;
    for (i = 1; i <= 20; i++)
    {
        printf("%d\n", n);
        n = n + 2;
    }
    return 0;
}