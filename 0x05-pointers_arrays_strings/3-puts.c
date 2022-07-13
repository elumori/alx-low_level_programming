#include "main.h"
/**
 * _puts - prints a string of chars.
 * @str: a pointer to an int that will change to string
 *
 * Return: Nothing.
 */

void _puts(char *str)
{
char *c;
int m;

c = str;

for (m = 0; c[m]; m++)
{
_putchar(c[m]);
}
_putchar('\n');
}
