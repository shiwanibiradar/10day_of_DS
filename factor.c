#include <stdio.h>
void main()
{
int n,fact,i;
fact=1;
printf("Enter the number for factorial");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	fact=fact*i;
}
printf("factorial is %d",fact);
}
	
