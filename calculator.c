#include <stdio.h>
int main()
{
char ca;
int first;
int second;
int sum;
printf("enter operation(+,-,*,/): ");
scanf("%c",&ca);
printf("enter first number:");
scanf("%d",&first);
printf("enter second number:");
scanf("%d",&second);

switch(ca){
{
case '+': sum=first+second;
          printf("answer is = %d\n", sum);
break;
}
{
case'-': sum=first-second;
         printf("answer is =  %d\n",sum);
break;
}
{
case'*': sum=first*second;
         printf("answer is = %d\n",sum);
break;
}
{
case'/':sum=second/first;
        printf("answer is  = %d\n",sum);
break;
}
default:printf("error! choose correct operation\n");
}
return 0;
}
