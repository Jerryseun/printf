#include "main.h"
/**
 * print_char - print a char
 * @args: arguments variable
 *
 * Return: nothing
*/

int print_char(va_list args)
{
	unsigned char character;

	character = va_arg(args, int);
	if (character == '\0')
		_putchar('-');
	else
		_putchar(character);

	return (1);
}

/**
 * print_string - print a string
 * @args: arguments variable
 *
 * Return: count
*/

int print_string(va_list args)
{
	int count = 0;
	const char *str = va_arg(args, const char *);

	if (str == NULL)
		str = "(null)";

	while (*str)
		count += _putchar(*str++);

	return (count);
}

/**
 * print_percent - print a string
 * @args: arguments variable
 *
 * Return: 1
*/

int print_percent(va_list args __attribute__((unused)))
{
	_putchar('%');

	return (1);
}
