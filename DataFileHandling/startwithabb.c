#include <stdio.h>
#include <conio.h>
int main()
{
    char c;
    printf("Enter a string : ");
S0:
    c = getche();
    if (c == 'a')
        goto S1;
    else
    {
        printf("the string is invalid !!!");
        return 0;
    }
S1:
    c = getche();
    if (c == 'b')
        goto S2;
    else
    {
        printf("the string is invalid !!!");
        return 0;
    }
S2:
    c = getche();
    if (c == 'b')
        goto S3;
    else
    {
        printf("the string is invalid !!!");
        return 0;
    }
S3:
    c = getche();
    if (c == 'a' || c == 'b')
        goto S3;
    else if (c == 13)
    {
        printf("String is valid !!!");
        return 0;
    }
    else
    {
        printf("the string is invalid !!!");
        return 0;
    }
}