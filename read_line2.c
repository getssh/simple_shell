#include "head.h"
/**
  * read_line2 - read a line from the stdin
  * Return: the string or value from the stdin
  */
char *read_line2(void)
{
	char *line = NULL;
	size_t len = 0;
	int check;

	check = getline(&line, &len, stdin);
	if (check == -1)
	{
		if (feof(stdin))
			exit(EXIT_SUCCESS);
	}
	return (line);
}
