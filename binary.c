#include<stdio.h>
#include<stdlib.h>
int main(void)
{ 
	int i,n,a[25];
	scanf("%d",&n);
	printf("\nThe decimal number to convert is:%d",n);
	for(i=0;n>0;i++)
	{
		a[i] = n%2;
		n = n/2;
	}
	printf("\nThe Converted binary number is:");
	for(i=i-1;i>=0;i--)
	{
		printf("%d",a[i]);
	}
	return 0;
}
