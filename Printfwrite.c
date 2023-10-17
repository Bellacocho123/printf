#include "main.h"
/**
 * handle_write_char - Prints a character.
 * @c: The character to print.
 * @buffer: Buffer array to handle print.
 * @flags: Active flags.
 * @width: Width.
 *
 * This function prints a character to the buffer while considering
 * width and padding flags. It returns the number of characters printed.
 *
 * Return: Number of characters printed.
 */
int handle_write_char(char c)
{

	return write(1, &c, 1);
}
