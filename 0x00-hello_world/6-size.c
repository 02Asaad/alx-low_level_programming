
#include <stdio.h>

/**
 * main - print the size of various types on the computer
 *
 * Size to be printed includes: char, int, long int
 * long long int, and a float.
 *
 * sizeof - use this function to determine the respective sizes
 *
 * Return: As always, zero (0)
 */

int main(void)
{
	int intType;
	char charType;
	float floatType;
	long int long_int;
	long long int long_long_int;

	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of a int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long_int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long_long_int));
	printf("Size of a float: %zu byte(s)\n", sizeof(charType));

	return (0);

}
