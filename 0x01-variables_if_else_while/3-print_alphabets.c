#include <stdio.h>

/**
 * main - This programe is to print the alphabet in
 * lowercase and then uppercase,
 * followed by a new line.
 *
 * "putchar" is allowed to be used.
 *
 * Return: the return should be zero.
 */

int main(void)

{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	putchar(c);

	for (c = 'A'; c <= 'Z'; ++c)
	putchar(c);

	putchar('\n');
	return (0);
}
