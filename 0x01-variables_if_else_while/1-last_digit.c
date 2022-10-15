#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - print a random number
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	b = n % 10;

	if (b > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, b);
	else if (b == 0)
		printf("Last digit of %d is %d and is 0\n", n, b);
	else
		printf("Last digit of %d is %d and is less than 6 and 0\n", n,
				m);
	return (0);
}
