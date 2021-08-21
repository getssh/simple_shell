#include "head.h"
/**
  * main - entry point for the whole program
  * @argc: argument count
  * @argv: string argumets / vector
  * @env: aray of strings zat hold env (var=value)
  * Return: zero Success
  */
int main(int argc, char **argv, char **env)
{
	char *str;
	char **tokes;
	/*int len;*/
	/*int pos = 0;*/

	if (argc < 1)
		return (0);
	do {
		/*pos = 0;*/
		fprintf(stderr, "$ ");
		str = read_line2();
		if (strcmp(str, "exit\n") == 0)
			break;
		if (strcmp(str, "env\n") == 0)
			_printenv(env);
		tokes = args(str);
		/*len = strlen(str);*/
		 /*exe = excute(tokes);*/
		if ((excute(tokes, argv[0])) < 0)
		{
			perror(argv[0]);
			exit(EXIT_FAILURE);
		}
		/**
		* while (tokes[pos] != NULL)
		* {
		*	printf("%s\n", tokes[pos]);
		*	pos++;
		* }
		*/
		free(str);
		free(tokes);
	} while (1);
	return (0);
}
