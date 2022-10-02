#include "main.h"
/**
 * *is_divisible - Checks if a number is divisible.
 * *@num: The number to be checked
 * *@div: The divisor
 * * Return: If the number is divisible - 0
 * *If the number is not divisible - 1.
 * **/
int is_divisible(int num, int div)
{
	if (n <= 0)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		return (1);

	return (check_prime (n, i + 1));

