#include<stdio.h>
void main()
{
int a,sqaure;
printf("Enter the number for sqaure");
scanf("%d",&a);
sqaure=sqr(a);
printf("Print the sqaure number %d",sqaure);
}
int sqr(int x)
{
	int sq;
	sq=x*x;
}
