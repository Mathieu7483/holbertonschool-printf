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

/**
*function_d - print a decimal with sign
*@d: integer
*Return: print sign with decimal
*/
int function_d(int d)
{
	if (d == 0)
	{
		return (1);
	}

	if (d < 0)
	{
	putchar('-');
	}
int len;
while (d != 0)
len++;
return (len);
_putchar((d / 10) + '0');
_putchar((d % 10) + '0');
}
