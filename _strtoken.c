#include <shell.h>
/**
 * _strlen - returns the length of a string
 * @s: string to find length of
 *
 * Return: length of s
 */

void _strtoken(char *tok)
{
	char **tokens = NULL;
	int i = 0;
	char *aux = NULL;

	tokens = malloc((counter_words(tok) + 1) * sizeof(char *));
	while (*(tokens + i))
	{
		aux = strtok(tok, " ");
		tokens[i] = aux;
		i++;
	}
	tokens[i] = '\0';
	free(tokens);
}
