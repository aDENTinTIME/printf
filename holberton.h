#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
* struct format - Struct spec_t.
* @sym: symbol.
* @f: function.
*/

typedef struct format
{
	char *sym;
	int (*f)(va_list);
} spec_t;

int _printf(const char *format, ...);
int _putchar(char c);
int(*get_spec_func(char spec))(va_list);

int print_char(va_list args);
int print_percent(va_list args);
int print_integer(va_list args);
int print_decimal(va_list args);
int print_string(va_list args);
int print_special_string(va_list args);
int print_rot13(va_list args);
int print_reverse(va_list args);
int print_pointer(va_list args);
int print_binary(va_list args);
int print_unsigned(va_list args);
int print_octal(va_list args);
int print_lil_hex(va_list args);
int print_big_hex(va_list args);
int binary_helper(unsigned int num);
int octal_helper(int num);

#endif
