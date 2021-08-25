#include "header.h"

int num_builtins()
{
	return (sizeof(builtin_str) / sizeof(char *));
}

int cd_b(char **args)
{
	if (args[1] == NULL)
		fprintf(stderr, "Argument expected to cd");
	else
	{
		if (chdir(args[1]) != 0)
			perror("cd");
	}
	return (1);
}
int help_b(char **args)
{
	printf("Help for using the shell");
}
int exit_b(char **args)
{
	return (0);
}