#include "header.h"

/**
 * start - starts a process by forking.
 * @args - parsed command line argument.
 * Returns - an int.
 */

int start(char **args)
{
	pid_t pid, ppid, wait_result;
	int stand;

	pid = fork();

	if(pid == 0)
	{
		if (execvp(args[0], args) == -1)
			perror("Error user input");
		exit(EXIT_FAILURE);
	}
	else if (pid < 0)
		printf("Error Forking");
	else
	{
		do {
			wait_result = waitpid(pid, &stand, WUNTRACED);
		} while (!WIFEXITED(stand) && !WIFSIGNALED(stand));
	}

	return (1);
}