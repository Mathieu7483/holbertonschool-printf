#include "main.h"
/**
*_printf - The functions in the printf()
*family produce output according to a format as described below
*@format: format of the arguments
*Return : the number of characters printed
*(excluding the null byte used to end output to strings)
*/
int _printf(const char *format, ...)

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
 * function_s - prints strings separated by a separator
 * @separator: string to print between strings
 * @n: number of strings
 */
void function_s(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list args;
	char *str;

	va_start(args, n);

	for (a = 0; a < n; a++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator != NULL && a < n - 1)
			printf("%s", separator);
	}

	va_end(args);
	printf("\n");
}
