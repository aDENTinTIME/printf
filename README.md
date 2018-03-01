# Printf

## Arik Rosenthal & Lizzie Turner

<br>
<br>

## Synopsis
\#include "holberton.h"

\_printf _FORMAT_ [_ARGUMENT_]**...**

<br>

## Description
The \_printf function produces output in a specific format, based on the given options, and writes to the standard output.

### Return value
Number of characters printed.

### Format of the format string
Unformatted unless specified by user.

### The conversion specifier
A character that specifies what type of output to return.

<br>

The following specifiers **must** be preceded by a percent '**%**' sign, otherwise they are treated like normal characters.

### c
The int argument is converted into type char and a single character is written.

### s
The argument is of type char \*. The full string is written, up to a terminating null byte '\0'.

### S
The argument is of type char \*. The full string is written, up to a terminating null byte '\0', except for non printable characters, which instead are printed as their ascii value, in hex ie. '\x0A', instead of '\n'.

### d, i
The int argument is converted to a signed decimal notation.

### p
The long int argument containing an address is printed.

### b, o, u, x, X
The unsigned int argument is converted to binary (base 2) **b**, octal (base 8) **o**, unsigned decimal **u**, lowercase hexadecimal **x**, or UPPERCASE hexadecimal **X** notation.

### r
The argument is of type char \*. The full string is written in reverse.

### R
The argument is of type char \*. The full string is converted into ROT13, each letter is rotated 13 positions, numbers are unaffected.

<br>

## Example
Here is an example of how you could impliment the '%s' format specifier.
```c
int main(void)
{
	_printf("Print %s!", "this");
	return (0);
}
```
The preceding function would output `Print this!`

<br>

## See Also
**printf**(1)

<br>

## Bugs
   No known bugs.
   Please contact one of the authors in regard to any unanticipated behavior.

<br>

## Prototype
```c
int _printf(const char *format, ...)
```
