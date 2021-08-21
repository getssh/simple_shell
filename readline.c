#include "head.h"
/**
 * read_line - read a line from the stdin
 * Return: the input typed by tht user
 */
char *read_line(void)
{
	char *buffer;
	int bufsize = 100;
	int pos = 0;
	int c;

	buffer =  malloc(sizeof(char) * bufsize);
	while (1)
	{
		c = getchar();
		if (c == '\n')
		{
			buffer[pos] = '\n';
			buffer[pos + 1] = '\0';
			return (buffer);
		}
		buffer[pos] = c;
		pos++;
		if (pos >= bufsize)
		{
			bufsize += 100;
			buffer = realloc(buffer, bufsize);
		}
	}
	/*return (buffer);*/
}
