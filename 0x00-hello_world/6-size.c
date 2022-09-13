#include <stdio.h>
/**
 *  * main - declaration of function
 * * * Prints out the data types
 **  * Return: Always 0 (success)
 *   **/
int main(void)
{
	long a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of an int: %zu byte(s)\n", sizeof(a));
	printf("Size of a long int: %zu byte(s)\n", sizeof(b));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(c));
	printf("Size of a char: %zu byte(s)\n", sizeof(d));
	printf("Size of a float: %zu byte(s)\n", sizeof(f));
	return (0);
}
