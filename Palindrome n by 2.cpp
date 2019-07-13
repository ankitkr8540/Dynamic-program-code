#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char s[100];
	int n,i;
	printf("Enter the string\n");
	scanf("%s",s);
	int flag=0;
	n = strlen(s);
	for(i=0;i<n/2;i++)
	{
		if(s[i]==s[n-1-i])
		flag = 1;
		else
		flag = 0;
	}
	if(flag == 1)
		printf("palindrome");
	else
	printf("not palindrome\n");
	return 0;
}

