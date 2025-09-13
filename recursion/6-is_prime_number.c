#include "main.h"

/**
 * prime_helper - helps check if number is prime recursively
 * @n: number to check
 * @i: divisor to test
 *
 * Return: 1 if prime, 0 otherwise
 */
int prime_helper(int n, int i)
{
	if (i * i > n)
	return (1);
	if (n % i == 0)
	return (0);
	return (prime_helper(n, i + 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	return (0);
	return (prime_helper(n, 2));
}
