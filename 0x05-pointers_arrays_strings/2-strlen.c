#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: stores variable for the length.
 *
 * Return: Always 0 .
 */

int _strlen(char *s)
{
int len;

len = 0;
while (s[len] != '\0')
{
len++;
}
return (len);
}
