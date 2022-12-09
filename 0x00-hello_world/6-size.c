#include <stdio.h>

/**
 * main - prints out the sizes of various data types
 *
 * Return: returns a 0 if all is successful else returns a -1
 */

int main(void)
{
	printf("Size of a char: %li byte(s)\n", sizeof(char));
	printf("Size of an int: %li byte(s)\n", sizeof(int));
	printf("Size of a long int: %li byte(s)\n", sizeof(long));
	printf("Size of a long long int: %li byte(s)\n", sizeof(long long));
	printf("Size of a float: %li byte(s)\n", sizeof(float));

	return (0);
}
