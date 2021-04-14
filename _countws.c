#include <shell.h>

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
