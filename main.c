#include "shell.h"

/**
 * main - program entry point
 * @argc: argument count
 * @argv: user commands
 *
 * Return: 0 (Always)
 */

int main(int argc __attribute__((unused)), char **argv __attribute__((unused)))
{
	/* environ is declared in 'shell.h' */
	shell_loop(environ);
	return (0);
}
