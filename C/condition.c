#include <stdio.h>

int main()
{
	int point;
	printf("How many points did you lose ? :-\n");
	
	scanf("%d",&point);	

	if (point < 2)
	{
		printf("you lost fewer points than me\n");
	}

	else if (point > 2)
	{
		printf("You have lost more points than me\n");
	}
	else
	{
		printf("you lost the same point as me.\n");
	}
}
