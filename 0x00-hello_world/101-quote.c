#include<unistd.h>
/**
 * main - Entry point
 *
 * Return : return 0 Always (success)
 */
int main(void)
{
	char str1[] = "and that piece of art is useful\" - Dora Kopar, 2015-10-19\n";

	write(2, str1, 59);
	return (1);
}