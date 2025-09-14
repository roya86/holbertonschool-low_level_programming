#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory, containing a copy of the string given as a parameter.
 * @str: the string to duplicate
 *
 * Return: pointer to duplicated string, or NULL if str is NULL or memory fails.
 */
char *_strdup(char *str);
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
		dup[i] = '\0';
	return (dup);
}
