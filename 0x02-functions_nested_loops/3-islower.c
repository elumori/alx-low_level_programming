#include "main.h"
#include <stdio.h>
/**
 * _islower - checks for lower cases
 *
 * Return: Always 0
 */
int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
