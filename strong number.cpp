#include<stdio.h>
#include<stdlib.h>

int fact(int);

int main()
{
	int n,count=0,i,a[100],sum =0;
	printf("Enter the number\n");
	scanf("%d",&n);
	int temp =n;
	while(n)
	{
		n = n/10;
		count++;
	}
	n=temp;
	i=0;
	while(count!=0)
	{
	
		a[i] = n%10;
		n=n/10;
		sum = sum +fact(a[i]);
		count--;
		i++;
	
	}
	if(temp == sum)
	{
		printf("strong number\n");
	}
	else{
		printf("not strong number\n");
	}
	return 0;
}

int fact(int n)
{
	if(n==0)
	return 1;
	else
	return n*fact(n-1);
}
