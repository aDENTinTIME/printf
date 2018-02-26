#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* struct format - Struct format_t.
* @sym: symbol.
* @f: function.
*/

typedef struct format
{
	char *sym;
	void (*f)(va_list);
} format_t;


int _putchar(char c);

void print_char(va_list c);
void print_int(va_list i);
void print_float(va_list f);
void print_string(va_list s);

#endif
