#include "main.h"
#include <unistd.h>

/**
 * _putchar - this write the character c to stdout
 * @c: The character to print
 *
 * Return: 1 on success result
 * On error, -i is returned, and errno is set.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
