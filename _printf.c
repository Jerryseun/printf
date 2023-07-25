#include "main.h"

/**
 * _printf - a function that prints anything
 * @format: known last arg count for iteration
 * @...: iterator args
 *
 * Return: int
*/

int _printf(const char *format, ...)
{
	int printed, count = 0;
	int (*ptr_select)(va_list) = NULL;
	va_list args;

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			ptr_select = selector(format);
			if (ptr_select)
			{
				printed = ptr_select(args);
				if (printed < 0)
				{
					va_end(args);
					return (-1);
				}
				count += printed;
			}
			else
			{
				_putchar('%');
				_putchar(*format);
				count += 2;
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
