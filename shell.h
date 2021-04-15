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

extern char **environ;

int main(void);
int _strlen(char *s);
void _strtoken(char *tok);
size_t _countws(char *str);
char **double_ptr(int count_wds, char *buff, char *delim);

#endif /* _SHELL_H */
