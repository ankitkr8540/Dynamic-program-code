#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a,b;
	printf("Enter the first number \n");
	scanf("%d",&a);
	 printf("Enter the second number\n");
	 scanf("%d",&b);
	 
	 b=a+b-(a=b);
	 printf("After swapping\n");
	 printf("%d %d",a,b);
	 return 0;
	 
}
