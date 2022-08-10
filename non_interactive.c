#include "shell.h"

/*
 * This will handle command piping - It's requirement
 e.g echo "ls -l" | ./shell
 */

/* driver function */

/**
 * non_interactive - function to handle command piping
 * @env: environment variables with a focus on PATH
 */
void non_interactive(char **env)
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
	shell_execute(tokens, env);
}

