#include<stdio.h>
void main()
{
int a[10],n,i,j,temp;
printf("No of count in array");
scanf("%d",&n);
printf("Enter the number in random order for sorting");
for(i=1;i<=n;i++)
{
	scanf("%d",&a[i]);
}
for(i=1;i<=n;i++)
{
	temp=a[i];
	j=i-1;
	while((temp<a[j])&&(j>=0))
	{	
		a[j+1]=a[j];
		j=j-1;
	}
	a[j+1]=temp;
}
printf("print in sorted form");
for(i=1;i<=n;i++)
{
	printf("%d",a[i]);
}
}
