#include <shell.h>

/**
 * _strlen - returns the length of a string
 * @s: string to find length of
 *
 * Return: length of s
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
