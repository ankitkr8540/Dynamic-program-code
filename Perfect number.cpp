#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,i,sum = 0;
	printf("Enter the number to check whether it is perfect number or not\n");
	scanf("%d",&n);
	for(int i=1;i<=n/2;i++)
	{
		if(n%i == 0)
		{
			 sum+=i;
		}
	}
	if(sum == n)
	{
		printf("Perfect number\n");
	}
	else{
		printf("not perfect number\n");
	}
	return 0;
}
