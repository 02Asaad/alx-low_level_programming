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

	char c = "Last digit of";
	int n = 58679;
	int is = 9;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n > 5)
	printf("%s %d %d and is greater than 5\n", c, n, is);

	if (n == 0)
	printf("%s %d %d and is zero\n", c, n, is);

	if (n < 6)
	printf("%s %d %d  and is less than 6 and not 0\n", c, n, is);

	return (0);
}
