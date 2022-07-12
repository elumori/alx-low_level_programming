#include "main.h"
/**
 * swap_int - swaps the value of two integers.
 *@a: A pointer to A integer A
 *@b: A pointer to B integer B
 * Return: Nothing.
 */

void swap_int(int *a, int *b)
{
int f;
f = *a;
*a = *b;
*b = f;
}
