#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: pointer block of memory to fill
 * @b: value to set
 * @n: byte of the memory
 * Return: dest
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	/*declaring a FOR statement*/
	for (i = 0; i < n; i++)
	{
		*(s + i) = b; /* add 1 position to s */

	}/* END FOR */

	return (s);
}
