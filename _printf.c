include "main.h"

/**
 * _printf - the main printf function to output
 * @format: the argument of an input
 * Return: the length of the string
 */

int _printf(const char *format, ...)
{
	int n, length = 0;
        va_list characters;

        spec_func options[] = {
            {"%b", print_conv_binary},
            {"%c", print_for_one_char},
            {"%s", print_string},
            {"%%", print_percent},
            {"%d", print_signed_int},
            {"%i", print_unsigned_int},
            {"%u", print_custom_unsigned},
            {"%o", print_octal},
            {"%x", print_hex_lowercase},
            {"%X", print_hex_uppercase},
            {NULL, NULL}
        };

        va_start(characters, format);

        if (format == NULL || (format[0] == '%' && format[1] == '\0'))
                return (-1);

        while (*format)
		{
                 if (*format == '%')
                {
                                format++;
                                for (int b = 0; formatSpecs[b].specifier; b++)

                                {

                                        if (*format == formatSpecs[b].specifier[1])
                                        {
                                                n = formatSpecs[b].correct_function(characters);
                                                length += n;
                                                break;
                                        }
                                }
                        }
                        else
                        {
                                _putchar(*format);
                                length++;
                        }
                        format++;
                }
                va_end(characters);
                return length;
        }
}
