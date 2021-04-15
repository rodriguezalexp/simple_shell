#ifndef _SHELL_H
#define _SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <limits.h>
#include <signal.h>

int main(void);
int _strlen(char *s);
void _strtoken(char *tok);
size_t _countws(char *str);
char _environ(char *environ);
int _receved(char **receved);
char **make_env(char **env);
void free_env(char **env);

#endif /* _SHELL_H */
