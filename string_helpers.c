#include "holberton.h"

/**
 * print_string - prints argument of type char *
 * @args: -  argument to print
 *
 * Return: number of characters printed
 */

int print_string(va_list args)
{
	int count = 0;
	char *string = va_arg(args, char *);


	if (string == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}

	for (; string[count] != '\0'; count++)
		_putchar(string[count]);

	return (count);
}

/**
 * print_special_string - prints argument of type char *
 * replacing non-printable characters with ASCII value in hex
 * @args: argument to print
 *
 * Return: number of characters printed
 */

int print_special_string(va_list args)
{
	int index = 0;
	int count = 0;
	char *string = va_arg(args, char *);

	if (string == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}

	while (string[index] != '\0' && string[index] > 0)
	{
		if (string[index] >= 32 && string[index] < 127)
		{
			_putchar(string[index]);
			count++;
		}

		else
		{
			_putchar('\\');
			_putchar('x');
			count += 2;
			if (string[index] < 16)
			{
				_putchar('0');
				count++;
			}
			count += big_hex_helper(string[index]);
		}
		index++;
	}

	return (count);
}

/**
 * print_rot13 - prints argument of type char * after ROT13 encryption
 * @args: argument to print
 *
 * Return: number of characters printed
 */

int print_rot13(va_list args)
{
	int i;
	char *string = va_arg(args, char *);

	if (string == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}

	for (i = 0; string[i] != '\0'; i++)
	{
		if      (string[i] >= 110 && string[i] <= 122)
			_putchar(string[i] - 13);
		else if (string[i] >= 97 && string[i] <= 109)
			_putchar(string[i] + 13);
		else if (string[i] >= 78 && string[i] <= 90)
			_putchar(string[i] - 13);
		else if (string[i] >= 65 && string[i] <= 77)
			_putchar(string[i] + 13);
		else
			_putchar(string[i]);
	}

	return (i);
}

/**
 * print_reverse - prints reversed argument of type char *
 * @args: argument to print
 *
 * Return: number of characters printed
 */

int print_reverse(va_list args)
{
	int count = 0;
	int length = 0;
	char *string = va_arg(args, char *);

	if (string == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}

	while (string[length] != '\0')
	{
		length++;
		count++;
	}

	length--;

	while (length >= 0)
	{
		_putchar(string[length]);
		length--;
	}

	return (count);
}

/**
 * print_pointer - prints pointer address
 * @args: address to print
 *
 * Return: number of characters printed
 */

int print_pointer(va_list args)
{
	int count = 0;
	char *string = va_arg(args, char *);

	if (string == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}

	string = "";

	_putchar(string[0]);

	return (count);
}
