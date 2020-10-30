// Program for Linear search 
#include<stdio.h>
void main()
{
int i,n,key,a[29];
printf("Enter the no of element");
scanf("%d",&n);
printf("Enter the elements");
for(i=1;i<=n;i++)
{
	scanf("%d",&a[i]);
}
printf("Which element you want to find out");
scanf("%d",&key);
for(i=1;i<=n;i++)
{
	if (a[i]==key)
		break;
}

if(i<n)
	printf("element found at index %d",i);
else
	printf("Element not Found");
}

