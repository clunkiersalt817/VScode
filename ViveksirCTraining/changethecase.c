#include<stdio.h>
int main()
{
    char character;
    int ascii;
    printf("Enter the character : ");
    scanf("%c",&character);
    ascii=character;
    if(ascii>122||ascii<65)
    printf("Enter a valid English Alphabet");
    else
    {
        if (ascii<=90)
            printf("The lower case character is : %c",ascii+32);
        else
            printf("The uppercase character is : %c",ascii-32);
    }
    return 0;
}