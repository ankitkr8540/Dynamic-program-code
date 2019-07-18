#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main()
{
	int num,tmp,count=0,sum=0,t;
	
	printf("Enter the number \n");
	scanf("%d",&num);
	tmp	 = num;
	while(tmp!=0)
	{
		tmp = tmp/10;
		count++;
	}
	tmp = num;
	while(tmp!=0)
	{
		t = tmp%10;
		sum = sum+pow(t,count);
		tmp = tmp/10;
	}
	if(sum==num)
	printf("Armstrong number\n");
	else
	printf("not Armstrong number");
	
	return 0 ;
}
