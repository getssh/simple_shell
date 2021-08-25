#include "header.h"

int main(int ac __attribute__((unused)), char **av __attribute__((unused)))
{
	char *cmd;
	char **args;
	int stand;

	do {
		prompt();
		cmd = read_cmd();

		if (!cmd)
			exit(EXIT_SUCCESS);

		if (strcmp(cmd, "\n") == 0)
		{
			free(cmd);
			continue;
		}
		if (strcmp(cmd, "exit\n") == 0)
		{
			free(cmd);
			break;
		}

		args = parse(cmd);
		stand = execute(args);

	} while (1);

	exit(EXIT_SUCCESS);
}
