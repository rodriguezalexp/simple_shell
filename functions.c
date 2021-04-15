#include "shell.h"

/**
 * _strlen - returns the length of a string
 * @s: string to find length of
 *
 * Return: length of s
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;
	return (i);
}

/**
 * _strtoken - tokenizer words
 * @tok: pointer
 * Return: Always 0
 */
void _strtoken(char *tok)
{
	char **tokens = NULL;
	int i = 0;
	char *aux = NULL;

	tokens = malloc((_countws(tok) + 1) * sizeof(char *));
	while (*(tokens + i))
	{
		aux = strtok(tok, " ");
		tokens[i] = aux;
		i++;
	}
	tokens[i] = '\0';
	_receved(tokens);
	free(tokens);
}

/**
 * _countws - count words of a string
 * @str: string to store the words
 *
 * Return: counter
 */
size_t _countws(char *str)
{
	int state = 0;
	size_t counter = 0;

	while (*str != '\0')
	{
		if (*str == 32 || *str == 10 || *str == 9)
		{
			state = 0;
		}
		else if (state == 0)
		{
			state = 1;
			++counter;
		}
		++str;
	}
	return (counter);
}
