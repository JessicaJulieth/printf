#include "holberton.h"

/**
 * _printf - Functions that print all character
 * @format: Is a character string
 * Return: Output the length
*/

int _printf(const char *format, ...)
{
	unsigned long lenght_fmt = 0;
	const char *fmt = format;
	va_list list;
	int (*f)(va_list);

	va_start(list, format);
	while (fmt && *fmt)
	{
		if (*fmt == '%')
		{
			/* Analizamos el segundo carácter del %*/
			/* por ejemplo: %d,  analizamos el cáracter d*/
			fmt++;
			f = get_op_func(fmt);
			if (f != NULL)
			{
				lenght_fmt += f(list);
			}
			else
			{
				write(1, &fmt, 1);
			}
			fmt++;
		}
		else
		{
			lenght_fmt++;
			write(1, fmt, 1);
			fmt++;
		}
	}
	va_end(list);
	return (lenght_fmt);
}
