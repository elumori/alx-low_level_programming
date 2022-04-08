#include <stdlib.h>
#include <time.h>
/*program to print positive and negative numbers */

/* Return: 0 After program excutes */
int main(void)
{
	int n;
	srand(time(0));
	n=rand()-RAND_MAX()/2;
        if(n>1)
		printf("%d is positive \n", n);
	else if(n<0)
		printf("%d is nrgative \n" ,n);
	else
		printf("%d is zero \n", n);

	return (0);
}
