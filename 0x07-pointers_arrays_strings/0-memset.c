#include "main.h"

/**
 * _memset - This function fills the first n
 * bytes of the memory area
 * pointed to by @s with the constant byte @c.
 * @s: Its A pointer to the memory area to be filled.
 * @c: Its the character to fill the memory area with.
 * @n: Its The number of bytes to be filled.
 *
 * Return: A pointer to the filled memory area @s.
 */

void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
	memory[index] = value;

	return (memory);
}
