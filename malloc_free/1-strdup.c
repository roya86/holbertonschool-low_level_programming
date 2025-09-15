#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: the string to duplicate
 *
 * Return: pointer to duplicated string.
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		dup[i] = str[i];
	dup[len] = '\0';
	return (dup);
}
