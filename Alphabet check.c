#include<stdio.h>
void main(){
    char ch;
    printf("enter a character");
    scanf("%c",&ch);
    
   if( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
        printf("The entered character %c is an Alphabet",ch);
   else
        printf("The entered character %c is not an Alphabet",ch);

}
