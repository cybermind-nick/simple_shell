#include "shell.h"

/**
 * shell_execute - creates a fork and executes a command
 * @args: null terminated array to serve as arguments for execve()
 * @env: environment variable from main
 * Return: 1 on success. Exit on failure
 */

int shell_execute(char *argv, char **args)
{
	int status;
	pid_t c_pid;

	c_pid = fork();
	if (c_pid == 0)
	{
		if (execve(args[0], args, environ) == -1)
		{
			perror(argv);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
	wait(&status);
	}
	return (1);
}
