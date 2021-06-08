#include <stdio.h>
#define DOZEN 12
int main()
{
int i=0;
float w[DOZEN];
printf("Please enter the weight of the bananas!\n");
for (i=0;i<12;i++)
{
scanf("%f",&w[i]);
}
for (i=0;i<12;i++)
{
printf("Then the weight of the %dth banana is:%f\n",i,w[i]);
}
}
