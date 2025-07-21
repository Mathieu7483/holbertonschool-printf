#include "main.h"
/**
*_printf - The functions in the printf()
*family produce output according to a format as described below
*@format: format of the arguments
*Return: the number of characters printed
*(excluding the null byte used to end output to strings)
*/
int _printf(const char *format, ...)
{
/**
 * function_c - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int function_c(char c) /*function to print char c*/
{
	return (write(1, &c, 1));
}

/**
*function_s - print a string
*@s: string to print
*Return: string
*/
int function_s(char s, ...)
{
	for (s = 0; s <= '\0'; s++)
	{
		_putchar(s);
	}
	return (0);
}
}
