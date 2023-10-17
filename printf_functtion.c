#include "main.h"

/************************* PRINT CHAR *************************/

/**
 * Print a character.
 */
int print_char(va_list types)
{
	char c = va_arg(types, int);

	return _putchar(c);

}
/************************* PRINT A STRING *************************/
/**
 * Print a string.
*/
int print_string(va_list types)
{
	int length = 0; /*Declare the variable at the beginning*/
	char *str = va_arg(types, char *);

	if (str == NULL)
		str = "(null)";

	while (str[length] != '\0')

	{
		length++; /*Increment the length while iterating through the string*/
	}

	return write(1, str, length);
}

/************************* PRINT PERCENT SIGN *************************/
/**
 * Print a percent sign.
 */
int print_percent(va_list types)
{
	UNUSED(types);

	return write(1, "%%", 1);
}
