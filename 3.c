#include <stdio.h>
int main()
{
int a;
printf("Please enter the value of a!");
scanf("%d",&a);

switch(a)
{
case 1:
printf("Red\n");
break;
case 2:
printf("Green\n");
break;
case 3:
printf("Blue\n");
default:
printf("The information entered is invalid!");
break;
}
}
