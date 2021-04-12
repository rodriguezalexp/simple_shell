#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
extern char **environ;

int main(void)
{
    int i = 0;
    char *aux = NULL;
    char token = NULL;

    while ((environ + i))
    {
        if (!strncmp(environ[i], "PATH=", 5))
        {
            aux = environ[i] + 5;
        }
        i++;
    }
    token = strtok(aux, ":");
    while (token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, ":");
    }
}