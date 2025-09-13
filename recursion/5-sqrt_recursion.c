#include "main.h"

/**
 * sqrt_helper - helps to find the square root recursively
 * @n: the number
 * @i: current guess
 *
 * Return: natural square root, or -1 if not found
 */
int sqrt_helper(int n, int i)
{
	if (i * i == n)
	return (i);
	if (i * i > n)
	return (-1);
	return (sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: natural square root, or -1 if not found
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);
	return (sqrt_helper(n, 0));
}
