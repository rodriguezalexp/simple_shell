#include "shell.h"
/**
 * _receved - received
 * @receved: db pointer
 * Return: Always 0
 */
int _receved(char **receved)
{
	pid_t pid;

	pid = fork();
	if (pid == 0)
	{
		if ((execve(receved[0], receved, NULL) == -1))
		{
			perror("Error");
			return (0);
		}
	}
}
