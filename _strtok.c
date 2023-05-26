#include "main.h"
/**
 * _strtok - split a string to tokens
 * @str: a string
 * @delim: a dlim of words
 * Return: ptr to the next token or NULL
*/
char *_strtok(char *str, char *delim)
{
	static char *ptr, *rstr;

	if (!str)
		str = ptr;
	if(!str)
		return (NULL);

	while (1)
	{
		if (if_delim(*str, delim) == 1)
		{
			str++;
			continue;
		}
		if (*str == '\0')
			return (NULL);
		break;
	}
	rstr = str;
	while (1)
	{
		if (*str == '\0')
		{
			ptr = str;
			return (rstr);
		}
		if (if_delim(*str, delim) == 1)
		{
			*str = '\0';
			ptr = str + 1;
			return (rstr);
		}
		str++;
	}
}
