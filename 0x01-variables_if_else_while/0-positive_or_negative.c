#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 */
int main(void)
{
	int n;

	srand(time(0);
	n = rand() -RAND_MAX /2;

	if (n==0)
		printf("%d is zero\n");
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is positibe\n", n);

	return (0);

}
C level programming if else statements
