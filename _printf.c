#include "holberton.h"

/**
 * _printf - Prints a formatted string, similar to printf.
 * @format: Arguments passed to program.
 *
 * Return: Returns length of string.
 */

int _printf(const char *format, ...)
{
	int f_i, s_i;
	va_list args;
	int count = 0;

	spec_t spec [] =
	{
		{"c", print_char},
		{"i", print_int},
		{"d", print_decimal},
		{"s", print_string},
		{"%", print_percent},
		{NULL, NULL}
	};

	va_start (args, format);

	for (f_i = 0; format != NULL && format[f_i] != '\0'; f_i++)
	{
		if (format[f_i] == '%')
		{
			f_i++;
			func = find_spec(format[f_i]);
			count += func(args);
			f_i++;
		}
		else
		{
			_putchar(format[f_i]);
			count++;
		}
	}

	va_end(args);

	return (count);
}
