#include "shell.h"

/**
 * shell_loop - main program execution loop
 * @env: environment variables
 */

void shell_loop(char *argv)
{
	char *line, *shell_prompt = "#cisfun$ ";
	int status = 1;
	char **tokens;

	do {
		if (isatty(0) == 1)
		{
		/*This wil check whether the program is in interactive mode or not*/
			status = write(STDOUT_FILENO, shell_prompt, 10);
		}
	line = read_line();
	tokens = _strtok(line);
	status = shell_execute(argv, tokens);
	free(line);
	free(tokens);
	} while (status);
}
