#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int *argv, char *arg[])
{
	char *str, *token;
	int i, id, status, count = 0;
	size_t size = 0;
	char *tokens[10];

	printf("Welcome to my shell prototype\n");
	printf("type in your command and have fun\n");
	
	str = malloc(sizeof(char *));

	if(str == NULL)
	{
		printf("unable to allocate memory");
		exit(1);
	}

	while (strcmp(str, "exit") != 0)
	{
		count++;

		printf("\n$");

		/**
		 * trying out the getline function - size_t getline(char **string, size_t *n, FILE *stream);
		 */
		size = strlen(str);
		
		if (getline(&str, &size, stdin) == -1) // This is used to collect a stream of data from stdin until \n
		{
			printf("Unable to readline");
			exit(1);
		}
		str[strlen(str) - 1] = '\0'; // Usually, because str will include new line char, i am stting the last char to \0 to terminate the string.
		
		/**
		 * working with strtok function - char *strtok(char *str, const char *delim)
		 * 
		 * The strtok() function breaks a string into a sequence of zero or
		 * more nonempty tokens.  On the first call to strtok(), the string
		 * to be parsed should be specified in str.  In each subsequent call
		 * that should parse the same string, str must be NULL.
		 */
		i = 0;
		token = strtok(str, " ");
		tokens[i] = token;

		while (tokens[i] != NULL )
		{
			// printf("%s\n", tokens[i]); // this is here for debugging
			token = strtok(NULL, " ");
			
			i++;
			tokens[i] = token;
		}
		
		/**
		 * working with execve function - int execve(const char *pathname, char *const argv[],char *const envp[]);
		 * to execute functions
		 *
		 * wait - pid_t wait(int *wstatus); - wstatus points to an int used to save the status
		 * to wait for a child process to complete before returning to the parent process
		 *
		 * fork - pid_t fork(void); - to create a child process from the current process
		 *
		 *
		 */
		id = fork(); //creating a child process to execute the command

		if (id != 0)
			wait(&status);

		if (id == 0)
		{
			if (execve(tokens[0], tokens, NULL) == -1)
			{
				perror("Error:");
			}
		}
		// printf("After execve\n"); // for debugging purpose

		if (id != 0)
		{
			printf("you are still in the shell, you entered ==> %s, size = %ld, strcmp = %d\n", str, strlen(str), strcmp(str, "exit"));
			
			if (count == 15) // This is to prevent an infinite loop in case of a bug.
				break;
		}
	}

	free(str);
	
	printf("shell terminated\n");

	return (0);
}
