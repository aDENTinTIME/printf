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


int _putchar(char c);

int print_char(va_list c);
int print_int(va_list i);
int print_decimal(va_list d);
int print_string(va_list s);

#endif
