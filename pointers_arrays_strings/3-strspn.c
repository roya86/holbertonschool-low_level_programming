#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to be scanned
 * @accept: the string containing the characters to match
 *
 * Description: This function returns the number of bytes in the initial
 * segment of s which consist only of bytes from accept.
 *
 * Return: number of bytes in the initial segment of s
 * consisting only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = 0;
	int found;

	for (i = 0; s[i] != '\0'; i++)
	{
	found = 0;
	for (j = 0; accept[j] != '\0'; j++)
	{
	if (s[i] == accept[j])
	{
	count++;
	found = 1;
	break;
	}
	}
	if (!found)
	return (count);
	}
	return (count);
}
