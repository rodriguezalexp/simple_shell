#include <shell.h>

/**
 * main - shell main
 *
 * Return: Always 0
 */

int main(void)
{
	size_t datos = 0;
	char *buffer = NULL;
	size_t bufsize = 0;

	while (datos != EOF)
	{
		write(1, "$ ", 2);
		datos = getline(&buffer, &bufsize, stdin);
		buffer[datos - 1] = '\0';
		_strtoken(buffer);
	}
	free(buffer);
	exit(EXIT_SUCCESS);
}
