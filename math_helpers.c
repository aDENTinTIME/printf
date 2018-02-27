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

/**
 * lil_hex_helper - Converts and prints base 10 in lowercase base 16
 * @n: Argument of type unsigned int
 *
 * Return: number of characters printed
 */

int lil_hex_helper(unsigned int n)
{
	if (n < 16)
	{
		if (n < 9)
			_putchar(n + '0');

		else
			_putchar((n % 10) + 97);

		return (1);
	}
	return(1 + lil_hex_helper(n / 16) +
	       !_putchar(n % 16 < 9 ? n % 16 + '0' : ((n % 16) % 10) + 97));
}

/**
 * big_hex_helper - converts and base 10 in uppercase base 16
 * @n: argument of type unsigned int
 *
 * Return: number of characters printed
 */

int big_hex_helper(unsigned int n)
{
	if (n < 16)
	{
		if (n < 9)
			_putchar(n + '0');

		else
			_putchar((n % 10) + 65);

		return (1);
	}
	return(1 + big_hex_helper(n / 16) +
	       !_putchar(n % 16 < 9 ? n % 16 + '0' : ((n % 16) % 10) + 65));
}
