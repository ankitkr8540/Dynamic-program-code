#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char s[100],temp;
	int i,n;

	scanf("%s",s);
	n = strlen(s);
	for(i=0;i<n/2;i++)
	{
		temp = s[n-i-1];
		s[n-i-1] = s[i];
		s[i]= temp;
	}
	printf("%s",s);
return 0;
}
