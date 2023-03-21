#include <stdio.h>

/**
 * main - main function for this program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	/* sizeof evaluates the size of a variable */
	printf("Size of a char: %lu byte(s)", sizeof(char));
	printf("Size of an int: %lu byte(s)", sizeof(int));
	printf("Size of an double: %lu byte(s)", sizeof(double));
	printf("Size of a long int: %lu byte(s)", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)", sizeof(long long int));
	printf("Size of a float: %lu byte(s)", sizeof(float));

	return (0);
}
