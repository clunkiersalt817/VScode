// WAP to check if string is valid L={a*}
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
    if (c == 'b' || c == 'a')
        goto S1;
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