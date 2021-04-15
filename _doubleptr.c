#include "shell.h"
/**
 * double_ptr - array of ponters
 * @buff: buffer
 * @delim: delimiter
 * @count_ws: counter words
 * Return: buff_two
 */

char **double_ptr(int count_ws, char *buff, char *delim)
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

/**
 * _calloc - returns the length of a string
 * @nmemb: blablalval
 * @size: size of malloc
 * Return: Always 0
 */
void *_calloc(unsigned int nmemb, size_t size)
{
	size_t i;
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
