#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int sum = 0;
	const int target = 2772;
	int ch;

	srand((unsigned int)time(NULL));

	while (sum < target - 33)
	{
	ch = 33 + rand() % 94;
	if (sum + ch > target - 33)
	continue;
	putchar(ch);
	sum += ch;
	}

	putchar(target - sum);

	return 0;
}   
