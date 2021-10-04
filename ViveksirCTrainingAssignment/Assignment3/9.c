#include <stdio.h>
int main()
{
    int i, n, m, sol = 1;
    printf("Enter x and y in the form (x^y) : ");
    scanf("%d%d", &m, &n);
    for (i = 1; i <= n; i++)
    {
        sol = sol * m;
    }
    printf("%d", sol);
    return 0;
}