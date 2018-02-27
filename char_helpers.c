#include "holberton.h"

/**
 * print_char - prints argument of type char
 * @args: argument to print
 *
 * Return: number of characters printed
 * in this case, return value will always be 1
 */

int print_char(va_list args)
{
	char print_this = va_arg(args, int);

	_putchar(print_this);

	return (1);
}


/**
 * print_percent - prints percent sign
 * @args: percent sign
 *
 * Return: number of character printed
 * in this case, return value will always be 1
 */

int print_percent(va_list __attribute__((unused)) args)
{
	char percent = '%';

	_putchar(percent);

	return (1);
}
