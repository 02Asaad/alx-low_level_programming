#include "main.h"

/**
 * print_line - This function draws a straight line using
 * the characteer _.
 * @n: The number of _ characters to be printed.
 */
void print_line(int n)

{
	int len;

	if (n > 0)
	{
	for (len = 0; len < n; len++)
	_putchar('_');
	}
	_putchar('\n');
}
