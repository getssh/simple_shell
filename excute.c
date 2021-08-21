#include "head.h"
/**
  * excute - excute the passed argumetns using execve system call
  * @args: array of string (command and argumets)
  * @argv: name of the program argv[0]
  * Return: 1
  */
int excute(char **args, char *argv)
{
	pid_t pid;
	int status;
	char path[100];

	if (args[0][0] != '/')
		strcpy(path, "/bin/");

	strcat(path, args[0]);

	pid = fork();
	if (pid == 0)
	{
		if (execve(path, args, NULL) == -1)
		{
			perror(argv);
			exit(EXIT_FAILURE);
		}
	}
	else if (pid < 0)
	{
		perror(args[0]);
		/*exit(EXIT_FAILURE);*/
	}
	else
	{
		do
			waitpid(pid, &status, WUNTRACED);
		while (!WIFEXITED(status) && !WIFSIGNALED(status));
	}
	return (1);
}
