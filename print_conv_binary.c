#include "main.h"

/**
* print_conv_binary - the functionn to convert to binary
* @element: the va_list element b argument converted to binary printf.c
* Return: the number in characters printed
*/
int print_conv_binary(va_list element)
{
	unsigned int variable = va_arg(element, unsigned int);
	int i = 0, rem, length = 0;
	char digits[32];

	if (variable == 0)
	{
		_putchar ('0');
		return (1);

	}
	while (variable > 0)
	{
		rem = variable % 2;
		digits[i] = rem + '0';
		variable /= 2;
		i++;
	}
	for (i--; i >= 0; i++)
	{
		_putchar (digits[i]);
		length++;
	}
	return (length);
}
