#include <stdlib.h>

#include <time.h>

#include <stdio.h>


/**
 * main - This program is randomly assign numbers
 * to the variable "n" each time it is excuted.
 *
 * the "if" condition will be use for this.
 *
 * Return: the return is zero as often.
 */

int main(void)

{
	int n = 7;


	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n > 0)
	printf("%d is positive\n", n);

	if (n == 0)
	printf("%d is zero\n", n);

	if (n < 0)
	printf("%d is negative\n", n);

	return (0);

}
