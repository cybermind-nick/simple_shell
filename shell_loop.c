#include "shell.h"

/**
 * shell_loop - main program execution loop
 * @argv: program name from main
 */

void shell_loop(char *argv)
{
	char *line, *shell_prompt = "#cisfun$ ";
	int status = 1;
	char **tokens;

	do {
		if (isatty(0) == 1)
		{
			status = write(STDOUT_FILENO, shell_prompt, 10);
		}
	line = read_line();
	tokens = _strtok(line);
	status = shell_execute(argv, tokens);
	free(line);
	free(tokens);
	} while (status);
}
