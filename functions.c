#include "main.h"
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
int function_s(const char *s)/*function to print string s*/
{
	int string = 0;

	for (; s && *s; s++, string++)
	{
		write(1, s, 1);
	}
	return (string);
}

/**
*function_percent - print '%'
*Return: character %
*/
int function_percent(void)/*function to print char %*/
{
	return (write(1, "%", 1));
}

