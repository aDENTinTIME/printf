#include "holberton.h"

/**
 * print_string - prints argument of type char *
 * @s -  argument to print
 *
 * Return: number of characters printed
 */

int print_string(va_list s)
{
	int count = 0;
	char *string = va_arg(s, char *);

	for (count = 0; string[count] != '\0'; count++)
		_putchar(string[count]);

	return (count);
}

/**
 * print_special_string - prints argument of type char *
 * replacing non-printable characters with ASCII value in hex
 * @s: argument to print
 *
 * Return: number of characters printed
 */

int print_special_string(va_list s)
{
	int count = 0;

	return (count);
}

/**
 * print_rot13 - prints argument of type char * after ROT13 encryption
 * @r: argument to print
 *
 * Return: number of characters printed
 */

int print_rot13(va_list r)
{
	int count = 0;

	return (count);
}

/**
 * print_reverse - prints reversed argument of type char *
 * @r: argument to print
 *
 * Return: number of characters printed
 */

int print_reverse(va_list r)
{
	int count = 0;

	return (count);
}

/**
 * print_pointer - prints pointer address
 * @p: address to print
 *
 * Return: number of characters printed
 */

int print_pointer(va_list p)
{
	int count = 0;

	return (count);
}
