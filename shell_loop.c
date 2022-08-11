#include "shell.h"

/**
 * shell_loop - main program execution loop
 * @env: environment variables
 */

void shell_loop(char *argv)
{
	char *line, *shell_prompt = "#cisfun$ ";
	char **tokens;
	int status = 1;

	do {
		if (isatty(0) == 1)
		{
		/*This wil check whether the program is in interactive mode or not*/
			status = write(STDOUT_FILENO, shell_prompt, 10);
		}
		else
		{
			non_interactive(argv);
		}
	line = read_line();
	tokens = _strtok(line);
	status = shell_execute(argv, tokens);
	free(line);
	free(tokens);
	} while (status);
}
