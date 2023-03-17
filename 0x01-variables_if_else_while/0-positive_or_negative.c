#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	int n = rand() % 100;
	char res[100] ;
	if (n==0)
	{
		strcat(res, "is zero");
	}
	else if (n>0)
	{
		strcat(res, "is positive");
	}
	else 
	{
		strcat(res, "is negative");
	}
	printf("%d %s\n",n,res);
	return 0;
}
