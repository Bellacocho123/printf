#include "main.h"

/**
 * _printf - function to print output
 * @format: input
 *
 * Description - fxn to format and print output to the
 * standard output stream
 *
 * Return: 0 on success
 */

int _printf(const char *format, ...)
{
	unsigned int i = 0, i_val = 0;

	va_list args;

	va_start(args, format);

	for ( ; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		else if (format[i + 1] == 'c')
		{
			_putchar(va_arg(args, int));
			i++;
		}
		else if (format[i + 1] == 's')
		{
			int i_value = _puts(va_arg(args, char *));

			i++;
			i_val += (i_value - 1);
		}
		else if (format[i + 1] == '%')
		{
			_putchar('%');
			i++;
		}
		else if ((format[i + 1] == 'd') || (format[i + 1] == 'i'))
		{
			_our_int(va_arg(args, int));
			i++;
		}
		i_val += 1;
	}
	va_end(args);

	return (i_val);
}
