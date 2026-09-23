#include <stdio.h>
int main()
{
char op;
printf("Enter the operator :");
scanf("%c",&op);
printf("Enter the integer value");
scanf("%d %d",&a &b);
switch(op)
{
case '+':
printf(%d + %d = %d",a,b,a+b);
  break;

case '-':
printf("%d - %d = %d",a,b,a-b);
printf("%d - %d = %d",b,a,b-a);
break;

case '*':
printf("%d * %d = %d",a,b,a*b);
break;

case '/':
printf("%d / %d = %d",a,b,a/b);
break;

default:
printf("YOu have entered wrong operator);
  }
return 0;
}
