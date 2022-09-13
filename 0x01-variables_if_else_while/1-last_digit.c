#include <stdlib.h>

#include <time.h>

#include <stdio.h>


/**
 * main - This program is to print the last digit
 * of the number stored in "n" variable.
 *
 * "if" conditional statement is employed.
 *
 * Return: as always is zero (0).
 */

int main(void)

{

	int n;
	int m;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	m = n % 10;


	if (m > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n, m);

	else if (n == 0)
	printf("Last digit of %d is %d and is 0\n", n, m);

	else
	printf("Last digit of %d is %d and is 0\n", n, m);

	return (0);
}
