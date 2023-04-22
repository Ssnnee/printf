#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_c - Prints character
 * @arg: list of arguments
 *
 * Return: Will return the amount of characters printed.
 */
int print_c(va_list arg)
{
	_putchar(va_arg(arg, int));
	return (1);
}

/**
 * print_s - Prints a string
 * @arg: list of arguments
 *
 * Return: Will return the amount of characters printed.
 */
int print_s(va_list arg)
{
	int i;
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}

/**
 * print_percent - Prints a percent symbol
 * @arg: list of arguments
 *
 * Return: Will return the amount of characters printed.
 */
int print_percent(__attribute__((unused))va_list arg)
{
	_putchar('%');
	return (1);
}
