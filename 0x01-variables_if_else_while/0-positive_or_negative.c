#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - program prints negative positive
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%dis positive\n", n);

	}
	else if (n == 0)
	{
		printf("%dis zero\n", n);
	}
	else
	{
		printf("%dis negative\n", n);
	}
	printf("\n");
	return (0);
}
