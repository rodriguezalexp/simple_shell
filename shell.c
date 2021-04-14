int main(void)
/**
 * _strlen - returns the length of a string
 * @s: string to find length of
 *
 * Return: length of s
 */

{
	ssize_t datos = 0;
	char *buffer = NULL;
	size_t bufsize = 0;
	char *buffcopy = NULL;

	while (datos != EOF)
	{
		write(1, "#shellAALS$", 9);
		datos = getline(&buffer, &bufsize, stdin);
		buffer[datos - 1] = '\0';
		printf("%s\n", buffer);
	}
	free(buffer);
	exit(EXIT_SUCCESS);
}
