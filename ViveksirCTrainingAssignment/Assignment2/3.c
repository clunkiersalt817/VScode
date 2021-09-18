#include <stdio.h>
int main()
{
    int i;
    char vowel[10] = {65, 69, 73, 79, 85, 97, 101, 105, 111, 117};
    char character;
    scanf(" %c",&character);
    for (i = 0; i < 10; i++)
    {
        if (character == vowel[i])
        {
            printf("The character entered is a vowel");
            i=6;
            break;
            
        }
    }
    if(i!=6)
    printf("The character entered is a consonant");
    return 0;
}