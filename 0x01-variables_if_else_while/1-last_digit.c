#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main function for this program
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* my code */
	m = n % 10
	if (m > 5)
		printf("last digit of %d is %d and is greater than 5\n", n, m);
	else if (m == 0)
		printf("last digit of %d is %d and is 0\n", n, m);
	else if (m < 6 && m != 0)
		print("last digit of %d is %d and is less than 6 and not 0\n", n, m);
	return (0);
}
