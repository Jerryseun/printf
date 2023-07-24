#include "main.h"
/**
 * print_ascii_hex - print non-printable ASCII characters in hex
 * @args: arguments variable
 *
 * Return: count
*/

int print_ascii_hex(va_list args)
{
	int count = 0;
	const char *str = va_arg(args, const char *);

	while (*str)
	{
		if (*str < 32 || *str >=127)
		{
			if (*str == '\n')
				count += _printf("\\x0A");
			else
				count += _printf("\\x%02x", (unsigned char)*str);
		}
		else
		{
			_putchar(*str);
			count++;
		}

		str++;
	}

	return (count);
}

