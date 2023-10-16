#include "main.h"
#include <stdio.h>

int _printf(const char *format, ...) {
  va_list args;
  va_start(args, format);

  int count = 0;
  while (*format != '\0') {
    if (*format == '%') {
      switch (*++format) {
        case 'c':
          count += putchar(va_arg(args, int));
          break;
        case 's':
          count += fputs(va_arg(args, char *), stdout);
          break;
        case '%':
          count += putchar('%');
          break;
        default:
          fprintf(stderr, "Unknown format specifier '%c'\n", *format);
          return -1;
      }
    } else {
      count += putchar(*format);
    }
    format++;
  }

  va_end(args);
  return count;
}
