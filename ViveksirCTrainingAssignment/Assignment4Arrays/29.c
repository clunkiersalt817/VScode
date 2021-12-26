#include<stdio.h>
int main()
{   
    int i=0;
    char string[20]={0};
    printf("Enter a Word : ");
    
    while (string[i]!=0)
    {
        printf("%c",string[i]);
        i++;
    }
    
    return 0;
}