#include "main.h"
/**
 * _islower - this program is to check for lowercase character
 * @c:  is the int that will use for the argument of the function
 * Return: as always return 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
