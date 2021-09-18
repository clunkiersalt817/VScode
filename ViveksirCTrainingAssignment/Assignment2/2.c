#include <stdio.h>
int main()
{
    char character;
    int ascii;
    printf("Enter the character to check : ");
    scanf(" %c", &character);
    ascii = character;
    printf("%d \n", ascii);
    if ((ascii < 65 || ascii > 122) || ((ascii > 90) && (ascii < 97)))
        printf("The given character is not an alphabet");
    else
        printf("The character is an alphabet");
    return 0;
}