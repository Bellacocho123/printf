#include "main.h"

```c
#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);

    int count = 0; // Number of characters printed

    while (*format != '\0')
    {
        if (*format == '%')
        {
            format++; // Move past the '%'

            // Handle the conversion specifier
            switch (*format)
            {
                case 'c':
                {
                    // Print a single character
                    int character = va_arg(args, int);
                    putchar(character);
                    count++;
                    break;
                }
                case 's':
                {
                    // Print a string
                    char *str = va_arg(args, char *);
                    while (*str != '\0')
                    {
                        putchar(*str);
                        str++;
                        count++;
                    }
                    break;
                }
                case '%':
                {
                    // Print a literal '%'
                    putchar('%');
                    count++;
                    break;
                }
                default:
                    // Invalid conversion specifier, ignore it
                    break;
            }
        }
        else
        {
            // Print regular characters
            putchar(*format);
            count++;
        }

        format++;
    }

    va_end(args);

    return count;
}

int main()
{
    _printf("Hello, %s! Today is %c.\n", "John", 'A');
    // Output: Hello, John! Today is A.

    _printf("The value of 5 is %d%%.\n", 5);
    // Output: The value of 5 is 5%.

    return 0;
}
```
