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
	int (*ptr_select)(va_list, flag_t *) = NULL;
	va_list args;
	flag_t flag = {0, 0, 0};

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	va_start(args, format);
	for (; *format; format++)
	{
		if (*format == '%')
		{
			format++;
			if (*format < ' ' || *format > '~')
			{
				count += _putchar('%') + _putchar(*format);
				continue;
			}
			/* handle flags */
			while (print_flag(*format, &flag))
				format++;
			ptr_select = selector(format);
			if (ptr_select)
			{
				printed = ptr_select(args, &flag);
				count += (printed < 0) ? (va_end(args), -1) : printed;
			}
			else
			{
				count += _putchar('%');
				count += _putchar(*format);
			}
		}
		else
		{
			count += _putchar(*format);
		}
	}
	va_end(args);
	return (count);
}
