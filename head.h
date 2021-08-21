#ifndef HEAD
#define HEAD
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <string.h>
#include <sys/wait.h>
#include <errno.h>
extern int errno;
extern char **environ;
/**
  * struct bultin - struct to handel bulit in fucntions/ commands
  * @comds: passed commands
  * @fun: function pinter to call the right function
  * Return: ntg
  */
typedef struct bultin
{
	char *comds;
	void (*fun)(char **);
} built;
char **args(char *str);
char *read_line(void);
int excute(char **args, char *argv);
void _printenv(char **env);
char *read_line2(void);
#endif
