#include "holberton.h"

/**
 * binary_helper - Converts and prints base 10 in base 2.
 * @num: Argument of type int.
 *
 * Return: Number of characters printed.
 */

int binary_helper(unsigned int num)
{
	if (num < 2)
	{
		_putchar(num + '0');
		return (1);
	}
	return (1 + binary_helper(num / 2) + !_putchar(num % 2 + '0'));
}

/**
 * octal_helper - Converts and prints base 10 in base 8.
 * @num: Argument of type int.
 *
 * Return: Number of characters printed.
 */

int octal_helper(unsigned int num)
{
	if (num < 8)
	{
		_putchar(num + '0');
		return (1);
	}
	return (1 + octal_helper(num / 8) + !_putchar(num % 8 + '0'));
}
