#include <stdio.h>

/**
 * main - This programe is to print the lowercase
 *alphabet in reverse order, followed by a new line.
 *
 * "putchar" is allowed to be used.
 *
 * Return: the return should be zero.
 */

int main(void)

{
	int c;

	for (c = 'z'; c >= 'a'; c--)

	putchar(c);
	putchar('\n');
	return (0);
}
