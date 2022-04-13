#include<main.h>
#include<stdio.h>
/**
 * _isalpha - checks for alpha char
 *@c: hold the variable to be checked
 * Return: Always 0
 */
int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
	{
		return (1);
	}

	else
	{
		return (0);

	}

}
