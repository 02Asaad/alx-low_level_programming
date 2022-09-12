#include <stdio.h>
/**
 * main - This programm is to print all possible
 * combinations of single-digit numbers.
 *
 * use only "putchar" but printf, puts etc.
 *
 * Return: always returnn a 0.
 */
int main(void)

{
	int i;

	for (i = '0'; i < '10'; ++i)
	
	putchar(i);
	putchar(',');	
	putchar("\n");
	return (0);
}
