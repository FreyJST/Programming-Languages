#include <stdio.h>
// this time we will use do while loop 


int main()
{

	int n;
	do
	{
		printf("NUmber of ? Box you Need :-");
		scanf("%d",&n);
	}
	while (n < 1);
	for (int i = 0; i < n; i++)
	{
		printf("?");
	}
	printf("\n");
}
		
