//program for prime number

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,i,flag=0;
	
	printf("Enter the number\n");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		flag =0;
		else
		flag =1;
	}
	if(flag==0)
	printf("not prime\n");
	else
	printf("Prime\n");
	return 0;
	
}
