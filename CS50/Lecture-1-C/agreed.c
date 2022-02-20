#include <stdio.h>

int main()
{
	char c;
	printf("Do you agree ?:-");
	scanf("%c", &c);
	if (c == 'y' || 'Y')
	{
		printf("Agreed\n");
	}
        else if (c == 'n' || 'N')
	{
		printf("Denied\n");
	}

}
	
