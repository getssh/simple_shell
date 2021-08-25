#include "header.h"

int execute(char **args)
{
	int j;

	for (j = 0; j < num_builtins(); j++)
	{
		if (strcmp(args[0], builtin_str[j]) == 0)
			return ((*builtin_func[j])(args));
	}
	return start(args);
}

