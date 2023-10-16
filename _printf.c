#include "main.h"

/**
 * _printf - the main printf function to output
 * @format: the argument of an input
 * Return: the length of the string
 */

int _printf(const char *format, ...)
{
	int a, b, n, length = 0;

	spec_func options[] = {
		{"%b", print_conv_binary}, {"%c", print_for_one_char},
		{"%s", print_string}, {"%%", print_percent},
		{"%d", print_signed_int}, {"%i", print_unsigned_int},
		{"%u", print_custom_unsigned}, {"%o", print_octal},
		{"%x", print_hex_lowercase}, {"%p", print_pointer},
		{"%X", print_hex_uppercase}, {NULL, NULL}
	};
	va_list characters;

	va_start(characters, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	for (a = 0; format[a]; a++)
	{
		if (format[a] == '%')
		{
			for (b = 0; options[b].specifier; b++)
			{
				if (format[a + 1] == options[b].specifier[1])
				{
					n = options[b].correct_function(characters);
					length += n;
					break;
				}
			}
			a++;
		}
		else
		{
			_putchar(format[a]);
			length++;
		}
	}
	va_end(characters);
	return (length);
}
