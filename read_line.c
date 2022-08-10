#include "shell.h"

/**
 * read_line - reads input from stdin
 * Return: string from input stream. EXIT_FAILURE on failure.
 */

char *read_line(void)
{
	char *line = NULL;
	size_t bufsize = 0;

	if (getline(&line, &bufsize, stdin) == -1)
	{
	exit(EXIT_FAILURE);
	}

	return (line);
}
