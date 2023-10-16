#include "main.h"

/**
 * _my_puts - function to print a string
 * @string: input
 * Description - function to print a string
 * Return: 0
 */

int _my_puts(char *string)
{
	int x = 0, r_val = 0;

	if (string)
	{
		while (string[x] != '\0')
		{
			_putchar(string[x]);
			r_val += 1;
			x++;
		}
	}
	_putchar('\n');

	return (r_val);
}
