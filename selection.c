#include<stdio.h>
void main()
{
int a[20],i,n;
printf("Enter the no of element");
scanf("%d",&n);
printf("Enter the elements");
for(i=1;i<=n;i++)
{
	scanf("%d",&a[i]);
}
for(i=1;i<=n;i++);
{
	printf("%d\n",a[i]);
}
}
