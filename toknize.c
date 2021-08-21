#include "head.h"
/**
  * args - breakdown a string to tokens using strtok fun
  * @str: a string to be toknized
  * Return: the tokens
  */
char **args(char *str)
{
	char **tokens;
	char *token;
	char *delimt = " \n\t";
	int pos = 0;
	int bufsize = 50;

	tokens = malloc(sizeof(char) * bufsize);
	if (tokens == NULL)
	{
		free(tokens);
		exit(EXIT_FAILURE);
	}
	token = strtok(str, delimt);
	while (token != NULL)
	{
		tokens[pos] = token;
		pos++;
		if (pos >= bufsize)
		{
			bufsize += 50;
			tokens = realloc(tokens, bufsize);
			if (tokens == NULL)
			{
				fprintf(stderr, "token allocation failed\n");
				exit(EXIT_FAILURE);
			}
		}
		token = strtok(NULL, delimt);
	}
	tokens[pos] = NULL;
	return (tokens);
}
