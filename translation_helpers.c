#include "holberton.h"

/**
 * print_binary - prints argument of type int in
 * binary (base 2).
 * @b: argument to print.
 *
 * Return: number of characters printed.
 */

int print_binary(va_list b)
{
	int count = 0;

	b = 0;

	_putchar(b + '0');

	return (count);
}

/**
 * print_unsigned - prints argument of type unsigned int.
 * @u: argument to print.
 *
 * Return: number of characters printed.
 */

int print_unsigned(va_list u)
{
	int count = 0;

	u = 0;

	_putchar(u + '0');

	return (count);
}

/**
 * print_octal - prints argument of type int in
 * octal (base 8).
 * @o: argument to print.
 *
 * Return: number of characters printed.
 */

int print_octal(va_list o)
{
	int count = 0;

	o = 0;

	_putchar(o + '0');

	return (count);
}

/**
 * print_lil_hex - prints argument of type unsigned int in
 * hex (base 16) using lowercase.
 * @x: argument to print.
 *
 * Return: number of characters printed.
 */

int print_lil_hex(va_list x)
{
	int count = 0;

	x = 0;

	_putchar(x + '0');

	return (count);
}

/**
 * print_big_hex - prints argument of type unsigned int in
 * hex (base 16) using UPPERCASE.
 * @x: argument to print.
 *
 * Return: number of characters printed.
 */

int print_big_hex(va_list x)
{
	int count = 0;

	x = 0;

	_putchar(x + '0');

	return (count);
}
