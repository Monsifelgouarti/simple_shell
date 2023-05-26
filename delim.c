#include "main.h"
/**
 * if_delim - check delimiter
 * @c: a char to test if it is a delimiter
 * @delim: list of delimiters
 * Return: 0 if @c is a delimiter and -1 if not
 */
unsigned int if_delim(char c, char *delim)
{
	while (*delim != '\0')
	{
		if (*delim == c)
			return (1);
		delim++;
	}
	return (0);
}
