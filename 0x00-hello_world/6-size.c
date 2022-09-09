#include <stdio.h>

/**
 * main - print "program that prints the size of various types of computer"
 *
 * Return: 0 ifexited properly, non-zero otherwise
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a float: %lu byte(s)\n", Sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));

	return (0);
}
