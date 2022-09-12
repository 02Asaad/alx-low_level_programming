#include <stdio.h>

/**
 * main - Program to print single digit numbers in
 * base 16, follow by a new line.
 *
 * Return: return to 0.
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; ++i)
	putchar(i);

	for (i = 'a'; i <= 'e'; ++i)
	putchar(i);

	putchar('\n');

	return (0);
}
