#include <stdio.h>
void main()
{
int a[10][10],n,i,j;
printf("Enter the dimension of array");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	for(j=1;j<=n;j++)
	{
		scanf("%d",&a[i][j]);
	}
}
for(i=1;i<=n;i++)
{
	printf("\n");
	for(j=1;j<=n;j++)
	{
	printf("%d\t",a[i][j]);
	}
}
}
