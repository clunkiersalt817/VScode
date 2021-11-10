#include <stdio.h>
int main()
{
    int i, j;
    char name[8];
    printf("Enter String : ");
    for (i = 0; i < 8; i++)
    {
        scanf("%c", &name[i]);
    }
    for (j = 0; j < 8; j++)
    {
        for (i = 0; i <= j; i++)
        {
            printf("%c", name[i]);
        }
        printf("\n");
    }
    return 0;
}