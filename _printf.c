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

	spec_t spec
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
		if (format[f_i] != '%')
		{
			_putchar(format[f_i]);
			f_i++;
			count++;
		}

		else
		{
			f_i++;
			for (s_i = 0; spec[s_i].sym != NULL; s_i++)
			{
				if (format[f_i] == *spec[s_i].sym)
				{
					count += spect[s_i].f(args);
				}
			}
		}
	}

	va_end(args);

	return (count);
}
