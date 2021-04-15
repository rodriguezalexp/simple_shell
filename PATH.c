#include <shell.h>

/**
 * main - returns the length of a string
 *
 * Return: Always 0
 */

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
