#include<stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars and initializes it with a specific char
 * @size: The size of the array
 * @c: The char to initialize the array with
 *
 * Return: Pointer to the array, or NULL if it fails or if size = 0
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;
	if (size == 0)
		return (NULL);
	array = malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}

