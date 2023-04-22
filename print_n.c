#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_n - prints a number send to this function
 *
 * @args: List of arguments
 * Return: The number of arguments printed
 */
int print_n(va_list args)
{
	int n, divisor, len;
	unsigned int num;

	n = va_arg(args, int);
	divisor = 1;
	len = 0;

	if (n < 0)
	{
		len += _putchar('-');
		num = (unsigned int)(-n);
	}
	else
		num = (unsigned int)(n);
	while ((num / divisor) > 9)
		divisor *= 10;
	while (divisor != 0)
	{
		len += _putchar('0' + num / divisor);
		num %= divisor;
		divisor /= 10;
	}
	return (len);
}
