#include <stdio.h>	 /* For Standard Input and Output */

/*#include <cs50.h> 3rd party lib  

int main()
{
	string answer = get_string("What is your name ?");
	printf("hello, answer\n");   this is same as the lacture remember i haven't loded the cs50 lib
}

*/


/* but as i don't use cs50 i have used the old school C */

int main()
{
	char a[100];
	printf("What is your name ? "); 
	gets(a);
	printf("Hello %s Welcome To The CS50 Have Fun learning new things here\n", a);
}


