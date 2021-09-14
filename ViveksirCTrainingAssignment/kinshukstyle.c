// Reverting the Case of an input character
#include<stdio.h>
#include<conio.h>
int main(){
    char x;
    printf("Enter any Character : ");
    x=getche();
    if (x>=65 && x<=90){
    x+=32;
    printf("\n%c is the lowercase of input character",x);
    }
    else if (x>=97 && x<=122){
    x-=32;
    printf("\n%c is the uppercase of input character",x);
    }
    else printf("\nEnter a valid English Alphabet");
return 0;
}