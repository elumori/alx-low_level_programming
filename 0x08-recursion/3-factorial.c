#include "main.h"
/**
 * factorial - prints factorial of number
 * @n: stores variable number
 * Return: Always 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return -1;
	}

	return (n * factorial(n-1));
}
