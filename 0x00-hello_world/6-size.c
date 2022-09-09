
#include <stdio.h>

/**
 * main - print the size of various types on the computer
 *
 * Size to be printed includes: char, int, long int
 * long long int, and a float.
 *
 * sizeof - use this function to determine the respective sizes
 *
 * return: as always, zero (0)
 */

int main(void)
{
	int intType;
	char charType;
	float floatType;
	long int long_int;
	long long int long_long_int;

	printf("Size of a char: %zu\n", sizeof(charType));
	printf("Size of a float: %zu\n", sizeof(charType));
	printf("Size of a long int: %zu\n", sizeof(long_int));
	printf("Size of a long long int: %zu\n", sizeof(long_long_int));
	printf("Size of a int: %zu\n", sizeof(intType));

	return (0);

}
