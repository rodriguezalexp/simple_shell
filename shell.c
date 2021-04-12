#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

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
		printf("%s\n", buffer);
	}
	free(buffer);
	exit(EXIT_SUCCESS);
}