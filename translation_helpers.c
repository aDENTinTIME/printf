#include "holberton.h"

/**
 * print_binary - prints argument of type int in
 * binary (base 2).
 * @args: argument to print.
 *
 * Return: number of characters printed.
 */

int print_binary(va_list args)
{
	int count = 0;
	int num = va_arg(args, int);

	num = 0;

	_putchar(num + '0');

	return (count);
}

/**
 * print_unsigned - prints argument of type unsigned int.
 * @args: argument to print.
 *
 * Return: number of characters printed.
 */

int print_unsigned(va_list args)
{
	int count = 0;
	unsigned int num = va_arg(args, unsigned int);

	num = 0;

	_putchar(num + '0');

	return (count);
}

/**
 * print_octal - prints argument of type int in
 * octal (base 8).
 * @args: argument to print.
 *
 * Return: number of characters printed.
 */

int print_octal(va_list args)
{
	int count = 0;
	int num = va_arg(args, int);

	num = 0;

	_putchar(num + '0');

	return (count);
}

/**
 * print_lil_hex - prints argument of type unsigned int in
 * hex (base 16) using lowercase.
 * @args: argument to print.
 *
 * Return: number of characters printed.
 */

int print_lil_hex(va_list args)
{
	int count = 0;
	unsigned int num = va_arg(args, unsigned int);

	num = 0;

	_putchar(num + '0');

	return (count);
}

/**
 * print_big_hex - prints argument of type unsigned int in
 * hex (base 16) using UPPERCASE.
 * @args: argument to print.
 *
 * Return: number of characters printed.
 */

int print_big_hex(va_list args)
{
	int count = 0;
	unsigned int num = va_arg(args, unsigned int);

	num = 0;

	_putchar(num + '0');

	return (count);
}
