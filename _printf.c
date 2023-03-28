#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - Outputs a formatted string.
 * @format: Character string to print - may contain directives.
 *
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int counter = 0;

	va_start(arg, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 's')
			{
				char *string = va_arg(arg, char*);

				while (*string != '\0')
				{
					putchar(*string);
					string++;
					counter++;
				}
			}
			else if (*format == 'c')
			{
				char character = va_arg(arg, int);

				putchar(character);
				counter++;
			}
			else
			{}
			format++;
			continue;
		}
		putchar(*format);
		format++;
		counter++;
	}
	/* Return the number of characters printed excluding end of line character */
	return (counter);
}
