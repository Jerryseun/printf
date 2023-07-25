#include "main.h"
/**
 * print_char - print a char
 * @args: arguments variable
 *
 * Return: nothing
*/

int print_char(va_list args)
{
	char character;

	character = va_arg(args, int);
	_putchar(character);

	return (1);
}

/**
 * print_string - print a string
 * @args: arguments variable
 *
 * Return: len
*/

int print_string(va_list args)
{
	int count = 0;
	const char *str = va_arg(args, const char *);

	if (str == NULL)
		str = "(null)";

	while (*str)
	{
		_putchar(*str++);
		count++;
	}

	return (count);
}
