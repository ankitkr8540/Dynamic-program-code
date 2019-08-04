//twin prime
#include<stdio.h>
#include<stdlib.h>
int checkprime(int);
int main()
{
	int i,start,end;
	printf("Enter the starting number\n");
	scanf("%d",&start);
	
	printf("Enter the ending number\n");
	scanf("%d",&end);
	
	for(i=start ; i<end ; i++)
	{
		if(checkprime(i) && checkprime(i+2))
		{
			printf("(%d , %d)",i,i+2);
			printf("\n");
			i=i+2;
		}
	}
	return 0;
}

int checkprime(int n)
{
	if (n==1)
		return 1;
	
	for(int i = 2;i<n/2;i++)
	{
		if(n%i==0)
		return 0 ;
	}
 	return 1;
}
