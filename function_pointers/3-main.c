#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Perform a simple calculation based on CLI arguments
 * @argc: Number of arguments
 * @argv: Array of argument strings
 *
 * Return: 0 on success (exits with 98/99/100 on specific errors)
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	int (*opf)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	opf = get_op_func(argv[2]);
	if (argv[2][1] != '\0' || opf == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = opf(a, b);
	printf("%d\n", result);

	return (0);
}
