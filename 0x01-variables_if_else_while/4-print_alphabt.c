#include <stdio.h>

/**
 * main - This programe is to print the alphabet in
 * lowercase, followed by a new line.
 *
 * "putchar" is allowed to be used.
 *
 * Return: the return should be zero.
 */

int main(void)

{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		if (c == 'e')
		continue;

		if (c == 'q')
		continue;
	}

	putchar(c);
	putchar('\n');
	return (0);
}
