#include "holberton.h"

/**
 * print_char - prints argument of type char
 * @c: argument to print
 *
 * Return: number of characters printed
 * in this case, return value will always be 1
 */

int print_char(va_list c)
{
	_putchar(va_args(c, int));

	return (1);
}


/**
 * print_percent = prints percent sign
 * @p - percent sign
 *
 * Return: number of character printed
 * in this case, return value will always be 1
 */
int print_percent(va_list p)
{
	_putchar('%');

	return (1);
}
