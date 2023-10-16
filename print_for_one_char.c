#include "main.h"

/**
 * print_for_one_char - the function should print one char
 * @element: the va_list element passed in from _printf.c
 * Return: the number of charactes in the string
 */
int print_for_one_char(va_list element)
{
	char s;

	s = va_arg(element, int);
	_putchar(s);

	return (1);
}
