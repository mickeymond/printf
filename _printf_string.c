#include "main.h"

/**
 * _printf_string - Outputs a formatted string.
 * @string: String argument.
 * @counter: Integer counter.
 * Return: void
 */
void _printf_string(char *string, int *counter)
{
	while (*string != '\0')
	{
		_putchar(*string);
		string++;
		(*counter)++;
	}
}
