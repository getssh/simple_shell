#include "header.h"

/**
 * read_cmd = reads a command line input
 * Return : character pointer.
 */

char *read_cmd(void)
{
	char buffer[1024];
	char *ptr1 = NULL;
	char ptrlen = 0;

	while (fgets(buffer, 1024, stdin))
	{
		int bufferlen = strlen(buffer);

		if (!ptr1)
			ptr1 = malloc(bufferlen + 1);

		else
		{
			char *reptr = realloc(ptr1, ptrlen + bufferlen + 1);

			if (reptr)
				ptr1 = reptr;
			else
			{
				free(ptr1);
				ptr1 = NULL;
			}
		}
		
		if (!ptr1)
		{
			fprintf(stderr, "Allocation error\n");
			return NULL;
		}
		strcpy(ptr1 + ptrlen, buffer);
	}
		return ptr1;
}
