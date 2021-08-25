#include "header.h"

#define BUFFERSIZE 1024
#define DELIM " \t\r\n\a"

char **parse(char *line)
{
	int buffersize = BUFFERSIZE, i = 0;
	char **arrays = malloc(buffersize * sizeof(char *));
	char *split;

	if (!split)
		exit(EXIT_FAILURE);
	split = strtok(line, DELIM);

	while (split != NULL)
	{
		arrays[i] = split;
		i++;
	}

	if (i >= buffersize)
	{
		buffersize += BUFFERSIZE;
		arrays = realloc(arrays, buffersize * sizeof(char *));
		if (!split)
		exit(EXIT_FAILURE);
	}
	split = strtok(NULL, DELIM);
	arrays[i] = NULL;
	return (arrays);
}

