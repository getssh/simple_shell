#ifndef HEADER_H_
#define HEADER_H_

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

int cd_b(char **args);
int help_b(char **args);
int exit_b(char **args);

char *builtin_str[] = {
	"cd"
	"help",
	"exit"
};

int (*builtin_func[]) (char **) = {
	&cd_b,
	&help_b,
	&exit_b
};

void prompt(void);
void prompt2(void);
char *read_cmd(void);
char **parse(char *);
int execute(char **);
int start(char **);
int num_builtins();

#endif
