#include <stdio.h>
#include <math.h>

/**
 * main - prints the largest prime factor of 612852475143
 *
 * Return: Always 0
 */
int main(void)
{
	long number = 612852475143;
	long divisor = 2;
	long largest = 0;

	while (number > 1)
	{
	if (number % divisor == 0)
	{
	largest = divisor;
	number /= divisor;
	}
	else
	{
	divisor++;
	}
	}

	printf("%ld\n", largest);
	return (0);
}
