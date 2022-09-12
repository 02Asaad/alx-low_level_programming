#include <unistd.h>

/**
 * putchar - This C program is to print the below statements
 * without the use of "printf" or "puts" as earlier
 * used and follow it by a new line, to the standard error.
 *
 * "putchar" is intended to be used instead.
 *
 * Return: This program should return 1.
 */

int main(void) {

	write(2,
		"and that piece of art iis useful\" - Dora Korpar, 2015-10-19\n"
		59);
	return (1);

}
