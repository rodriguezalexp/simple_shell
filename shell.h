#ifndef _SHELL_H
#define _SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h> /*write library */
#include <stdlib.h>
#include <string.h>

extern char **environ;

int main(void);
int _strlen(char *s);
void _strtoken(char *tok);
size_t _countws(char *str);
char **double_ptr(int count_wds, char *buff, char *delim);

#endif /* _SHELL_H */
