#include <stdio.h>

/**
 * main - This program lists all the natural numbers
 * below 1024 (with this number excluded)
 * with are multiples of 5 or3 .
 *
 * printf function is allowed.
 * Return: as always, return 0.
 */
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
	if ((i % 3) == 0 || (i % 5) == 0)
	sum += i;
	}

	printf("%d\n", sum);

	return (0);
}
