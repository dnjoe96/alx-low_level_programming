#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char *str;

	printf("Welcome to my shell prototype\n");
	printf("type in your command and have fun\n");
	//printf("\n>>>");
	
	str = malloc(sizeof(char *));

	while (strcmp(str, "exit") != 0)
	{
		printf("\n>>>");

	        scanf("%s", str);

		printf("you are still in the shell");
	}
	
	printf("shell terminated\n");

	return (0);
}
