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
	unsigned int i = 0;

	va_list args;

	arr_printf funcs[] = 
	{
		{"r", print_strev}, {"R", print_rot13}
	};

	size_t count = sizeof(funcs) / sizeof(funcs[0]);

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;

			for (i = 0; i < count; i++)
			{
				if (*format == *(funcs[i].c))
				{
					funcs[i].f(args);
					break;
				}
			}

			if (i == count)
			{
				_putchar('%');
				_putchar(*format);
			}
			
		}
		else
		{
			_putchar(*format);
		}

		format++;
	}

	va_end(args);
	
	return (*format);
}
