#include <shell.h>

/**
 * _strlen - returns the length of a string
 * @s: string to find length of
 *
 * Return: length of s
 */

int main(void)

{
	ssize_t datos = 0;
	char *buffer = NULL;
	size_t bufsize = 0;

	while (datos != EOF)
	{
		write(1, "$ ", 2);
		datos = getline(&buffer, &bufsize, stdin);
		buffer[datos - 1] = '\0';
		tokenizer(buffer);
	}
	free(buffer);
	exit(EXIT_SUCCESS);
}
