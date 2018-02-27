#include "holberton.h"

/**
 * _printf - Prints a formatted string, similar to printf.
 * @format: Arguments passed to program.
 *
 * Return: Returns length of string.
 */

int _printf(const char *format, ...)
{
	int f_i;
	va_list args;
	int count = 0;
	int (*func)(va_list);

	va_start(args, format);
	for (f_i = 0; format != NULL && format[f_i] != '\0'; f_i++)
	{
		if (format[f_i] == '%')
		{
			f_i++;
			if (format[f_i] == '\0')
			{
				_putchar('%');
				count++;
				return (count);
			}
			while (format[f_i] == ' ')
				f_i++;
			func = get_spec_func(format[f_i]);
			if (func == NULL)
			{
				_putchar('%');
				_putchar(format[f_i]);
				count += 2;
			}
			else
			{
				count += func(args);
			}
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
