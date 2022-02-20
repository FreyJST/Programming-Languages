#include <stdio.h>

int main()
{
	int n;
	do 
	{
		printf("Number of Bricks you want in the game ? :-");
		scanf("%d",&n);
	}
	while (n < 1);
// row 	
	for(int i = 0; i < n; i++)
	{       
                // column
		for (int j = 0; j < n; j++)

		{
			printf("#");
		}
		printf("\n");		
	}

	printf("\n");
}

	


