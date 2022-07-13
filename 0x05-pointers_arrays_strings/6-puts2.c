#include "main.h"
/**
 * puts2 - pints every character of a string
 * @str: A pointer to the int string
 *
 *Return: Nothing
 */

void puts2(char *str)
{
int a;

for (a = 0; str[a] != '\0'; a++)
{
if (a % 2 == 0)
_putchar (str[a]);
}

_putchar ('\n');
}
