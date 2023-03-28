#include "main.h"

/**
 * _printf - Outputs a formatted string.
 * @format: Character string to print - may contain directives.
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
				_printf_string(va_arg(arg, char*), &counter);
			}
			else if (*format == 'c')
			{
				char character = va_arg(arg, int);

				_putchar(character);
				counter++;
			}
			else
			{
				_putchar(*format);
				counter++;
			}
			format++;
			continue;
		}
		_putchar(*format);
		format++;
		counter++;
	}
	va_end(arg);
	return (counter);
}
