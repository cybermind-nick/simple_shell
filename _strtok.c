#include "shell.h"
#define DELIM "\n"

/**
* _strtok - returns a null terminated array of tokens
* @line: string to be tokenized
* Return: a null termnated array of tokens. EXIT_FAILURE on failure
*/
char **_strtok(char *line)
{
	int bufsize = 64, position = 0;
	char **tokens = malloc(bufsize * sizeof(char *));
	char *token;


	if (!tokens)
	{
	perror("Allocation error\n");
	exit(EXIT_FAILURE);
	}

	token = strtok(line, DELIM);

	while (token != NULL)
	{
	tokens[position] = token;
	position++;
	token = strtok(NULL, DELIM);
	}

	tokens[position] = NULL;
	return (tokens);
}
