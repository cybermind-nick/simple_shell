#include "shell.h"

/*
 * This will handle command piping - It's requirement
 e.g echo "ls -l" | ./shell
 */

/* driver function */

/**
 * non_interactive - function to handle command piping
 * @argv: program name from main
 */
void non_interactive(char *argv)
{
	/* size_t i = 0, n = 1024; */

	/* int exit_status = 0; */
	char *command = NULL;
	char **tokens;

	/* get the piped command -- It should come from STDIN */
	command = read_line();
	/**
	 * if (i <= 0)
	 * {
	 *	free(command);
	 *	exit(0);
	 * }
	 */

	tokens = _strtok(command);
	shell_execute(argv, tokens);
}

