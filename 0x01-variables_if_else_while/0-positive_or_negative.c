#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int n = rand();
	char res[] ;
	if (n==0)
	{
		res[] = "is zero";
	}
	else if (n>0)
	{
		res[] = "is positive";
	}
	else 
	{
		res[] = "is negative";
	}
	printf("%d %s\n",n,res[]);
	return 0;
}
