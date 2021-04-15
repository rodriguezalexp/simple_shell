#include "shell.h"

/**
 * _environ - returns the length of a string
 * @env: environ variable
 * Return: Always 0
 */

char _environ(char *env)
{
	int i = 0;
	char *aux = NULL;
	char *token = NULL;

	while (*(environ + i))
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
		token = strtok(NULL, ":");
	}
}
