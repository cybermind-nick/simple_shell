#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>

/* environment variables */
extern char **environ;

void shell_loop(char **env);
char *read_line(void);
char **_strtok(char *line);
int shell_execute(char **args, char **env);
void non_interactive(char **env);

#endif
