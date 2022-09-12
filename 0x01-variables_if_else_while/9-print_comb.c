#include <stdio.h>

/**
 * main - This program is to print single-digit
 * numbers and seperated by ',' followed by 
 * a space in an acsending order.
 *
 * Must use "putchar" only with max of 4.
 *
 * Return: it should return to zero.
 */
int main(void)

{
	for (y = 0; y < 10; ++y)
	putchar(y);
	if (y != 9)

	putchar(',');
	putchar(' ');

	putchar('\n');
	return (0);

}
