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
					_putchar(*string);
					string++;
					counter++;
				}
			}
			else if (*format == 'c')
			{
				char character = va_arg(arg, int);

				_putchar(character);
				counter++;
			}
			else
			{}
			format++;
			continue;
		}
		_putchar(*format);
		format++;
		counter++;
	}
	/* Return the number of characters printed excluding end of line character */
	return (counter);
}
