#include "main.h"
/**
 * _puts - main function that outputs string
 * @string: string to be printed
 *
 * Description: string to be printed this function takes a
 * null termainating string and outputs it
 *
 * Return: 0 on success
 */

int _puts(char *string)
{
	int hk = 0, i_val = 0;

	if (string)
	{
		while (string[hk] != '\0')
		{
			_putchar(string[hk]);
			i_val += 1;
			hk++;
		}
	}
	return (i_val);
}
