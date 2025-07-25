#ifndef MAIN_H
#define MAIN_H

#include <stddef.h> /*pour size_t*/
#include <stdio.h> /*pour stdout du printf*/
#include <stdarg.h> /*pour va_arg*/
#include <stdlib.h> /*pour Malloc et Atoi*/
#include <string.h> /*pour strlen*/
#include <unistd.h> /*pour _putchar*/

int _printf(const char *format, ...);
int _putchar(char c);
int function_c(char c);
int function_s(const char *s);
int function_percent(void);
int function_d(int d);
int function_i(int i);

#endif/*MAIN_H*/
