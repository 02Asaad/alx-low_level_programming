#include "main.h"

/**
 * print_diagonal - This function draws a
 * diagonal line using the / character.
 * @h: The number of / characters to be printed.
 */

void print_diagonal(int h)
{
	int len, space;

	if (h > 0)
	{
	for (len = 0; len < h; len++)
	{
	for (space = 0; space < len; space++)
	_putchar(' ');

	if (len == n - 1)
	continue;

	_putchar('\n');
	}
	}
	_putchar('\n');
}
