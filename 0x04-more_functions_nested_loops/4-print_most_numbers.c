#include "main.h"
/**
 * print_most_numbers - prints numbers
 * @n: print int
 * Return: Always 0
 */

void print_most_numbers(void)
{
int n;
n = 0;
while (n < 10)
{
if (n != 2 && n != 4)
{
_putchar(n + '0');
}
n++;
}
_putchar ('\n');
}
