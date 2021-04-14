#include "shell.h"
/**
 * _strlen - returns the length of a string
 * @s: string to find length of
 *
 * Return: length of s
 */

char **double_ptr(int count_wds, char *buff, char *delim)
{
	char **buff_two = NULL, *p = NULL;
	int i = 0, len = 0;

	len = _strlen(buff);
	buff_two = _calloc(len, sizeof(char *));
	if (buff_two == NULL)
		return (NULL);
	for (; i < count_wds; i++)
	{
		if (i == 0)
			p = strtok(buff, delim);
		else
			p = strtok(NULL, delim);
		buff_two[i] = p;
	}
	buff_two[i + 1] = NULL;
	return (buff_two);
}

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *mem_arr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem_arr = malloc(nmemb * size);
	if (mem_arr == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		mem_arr[i] = 0;
	return (mem_arr);
}
