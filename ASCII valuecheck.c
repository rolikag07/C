#include<stdio.h>
void main(){
    char ch;
    printf("enter a alphabet/number to know it's ASCII value: ");
    scanf("%c",&ch);
    
   if( (ch>=65 && ch<=90) || (ch>=97 && ch<=122) || (ch>=48 && ch<=57))
        printf("The entered character's value is %d ",ch);
   else
         printf("Please enter a valid alphabet/number");
}
