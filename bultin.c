#include "head.h"
/**
  * _printenv - print all environment varuabls and values
  * @env: aray of strings that hold env (var=value)
  * Return: Nothing
  */
void _printenv(char **env)
{
	int i;

	for (i = 0; env[i] != NULL; i++)
		printf("%s\n", env[i]);
}
