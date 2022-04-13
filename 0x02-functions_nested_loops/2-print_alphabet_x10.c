#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - print alphabet x10
 *
 * Return: Always 0 on success
 */
void print_alphabet_x10(void)
{
	int alphabet, count;

	count = 0;
	while (count < 10)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}

		count++;
		_putchar('\n');
	}
}
