#include <stdio.h>

/**
 * main - Program to print single digit numbers in
 * base 10, follow by a new line.
 *
 * Return: return to 0.
 */

int main(void)

{
	int i;

	for (i = '0'; i <= '9'; i++)

	putchar(i);
	putchar('\n');

	return (0);
}
